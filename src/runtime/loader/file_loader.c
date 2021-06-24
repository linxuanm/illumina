#include "file_loader.h"

#include <stdlib.h>
#include <inttypes.h>

#include "common/logging.h"
#include "runtime/structure/link_table.h"

void file_linker_load_entry(file_linker_ref_t *entry, stream_t *stream) {
    entry->tag = stream_read_1(stream);
    switch (entry->tag) {
        case LINK_TYPE_INT:
        case LINK_TYPE_FLOAT:
        case LINK_TYPE_FIELD_REF:
        case LINK_TYPE_METHOD:
            entry->value = stream_read_4(stream);
            entry->extra = stream_read_4(stream);
            break;

        case LINK_TYPE_GLOBAL_VAR:
        case LINK_TYPE_FUNCTION:
        case LINK_TYPE_CLASS:
            entry->value = stream_read_4(stream);
            break;

        default:
            ERROR("Bad link type: %d (@byte %llu)", entry->tag, stream->pc - 1);
            VM_SET_THREAD_ERRNO(VM_ERRNO_BAD_FILE_FORMAT);
            return;
    }
}

void file_load_func_entry(file_func_t *entry, stream_t *stream) {
    entry->signature = stream_read_4(stream);
    DEBUG("[Loader] --- Function signature index: %d --- ", entry->signature);

    uint8_t params_count = stream_read_1(stream);
    GEN_ARRAY_INIT(&entry->params, params_count, type_t);
    DEBUG("[Loader] Function parameter count: %d", params_count);

    for (uint8_t i = 0; i < params_count; ++i) {
        type_t *param = &GEN_ARRAY_GET(&entry->params, i);
        param->type_tag = stream_read_1(stream);

        if (param->type_tag == TYPES_TYPE_REF) {
            param->ref_class = stream_read_4(stream);
        }
    }

    entry->max_stack = stream_read_2(stream);
    entry->locals_count = stream_read_2(stream);
    DEBUG(
        "[Loader] Stack size: %d; locals count: %d",
        entry->max_stack, entry->locals_count
        );

    FUNC_SIZE_T code_length = stream_read_2(stream);
    GEN_ARRAY_INIT(&entry->code, code_length, uint8_t);
    DEBUG("[Loader] Code length: %d", code_length);

    for (FUNC_SIZE_T i = 0; i < code_length; ++i) {
        GEN_ARRAY_SET(&entry->code, i, stream_read_1(stream));
    }

    FUNC_SIZE_T line_length = stream_read_2(stream);
    GEN_ARRAY_INIT(&entry->lines, line_length, file_line_t);
    DEBUG("[Loader] Line table length: %d", line_length);

    for (FUNC_SIZE_T i = 0; i < line_length; ++i) {
        file_line_t *line = &GEN_ARRAY_GET(&entry->lines, i);
        GEN_PAIR_SET_FST(line, stream_read_2(stream));
        GEN_PAIR_SET_SND(line, stream_read_2(stream));
    }
}

void file_load_class_entry(file_class_t *entry, stream_t *stream) {

}

file_rep_t *load_file_rep(stream_t *stream) {
    file_rep_t *object_file = malloc(sizeof(file_rep_t));

    DEBUG("[Loader] Reading header");

    // header
    if (stream_read_4(stream) != 0xABCDDCBA) {
        ERROR("Invalid object file signature (expected 0xABCDDCBA)");
        VM_SET_THREAD_ERRNO(VM_ERRNO_BAD_FILE_FORMAT);
        goto error_signature;
    }

    stream_read_4(stream);
    stream_read_8(stream);

    // name table
    DEBUG("[Loader] Reading name table");

    POOL_SIZE_T name_table_size = stream_read_4(stream);
    DEBUG("[Loader] Name table entries: %d", name_table_size);
    GEN_ARRAY_INIT(&object_file->name_table, name_table_size, uint8_t *);

    for (POOL_SIZE_T i = 0; i < name_table_size; ++i) {
        uint8_t name_length = stream_read_1(stream);

        GEN_ARRAY_SET(
            &object_file->name_table, i, stream_read_str(stream, name_length)
            );
    }

    VM_GOTO_IF_ERROR(error_name_table);

    // link table
    DEBUG("[Loader] Reading link table");

    POOL_SIZE_T linker_size = stream_read_4(stream);
    DEBUG("[Loader] Link table entries: %d", linker_size);
    GEN_ARRAY_INIT(&object_file->link_table, linker_size, file_linker_ref_t);

    for (POOL_SIZE_T i = 0; i < linker_size; ++i) {
        file_linker_load_entry(
            &GEN_ARRAY_GET(&object_file->link_table, i), stream
            );
    }

    VM_GOTO_IF_ERROR(error_linker);

    // end of structure setup

    // global vars
    DEBUG("[Loader] Reading global variable pool");

    POOL_SIZE_T global_var_size = stream_read_4(stream);
    DEBUG("[Loader] Global variable entries: %d", global_var_size);
    GEN_ARRAY_INIT(
        &object_file->global_var_pool, global_var_size, file_global_var_t
        );

    for (POOL_SIZE_T i = 0; i < global_var_size; ++i) {
        file_global_var_t *entry = &GEN_ARRAY_GET(
            &object_file->global_var_pool, i
            );

        entry->name_entry = stream_read_4(stream);
        entry->var_type.type_tag = stream_read_1(stream);

        if (entry->var_type.type_tag == TYPES_TYPE_REF) {
            entry->var_type.ref_class = stream_read_4(stream); // class path
        }
    }

    VM_GOTO_IF_ERROR(error_global_var_pool);

    // functions
    DEBUG("[Loader] Reading functions");

    POOL_SIZE_T func_pool_size = stream_read_4(stream);
    DEBUG("[Loader] Function entries: %d", func_pool_size);
    GEN_ARRAY_INIT(&object_file->func_pool, func_pool_size, file_func_t);

    for (POOL_SIZE_T i = 0; i < func_pool_size; ++i) {
        file_load_func_entry(
            &GEN_ARRAY_GET(&object_file->func_pool, i), stream
            );
    }

    VM_GOTO_IF_ERROR(error_func_pool);

    // classes
    DEBUG("[Loader] Reading classes");

    POOL_SIZE_T class_pool_size = stream_read_4(stream);
    DEBUG("[Loader] Class entries: %d", class_pool_size);
    GEN_ARRAY_INIT(&object_file->class_pool, class_pool_size, file_class_t);

    for (POOL_SIZE_T i = 0; i < class_pool_size; ++i) {
        file_load_class_entry(
            &GEN_ARRAY_GET(&object_file->class_pool, i), stream
            );
    }

    VM_GOTO_IF_ERROR(error_class_pool);

    // EOF
    if (stream->pc != stream->end) {
        ERROR("[Loader] File stream not fully consumed");
        VM_SET_THREAD_ERRNO(VM_ERRNO_BAD_FILE_FORMAT);
    }

    return object_file;

    error_class_pool:
    GEN_ARRAY_RELEASE(&object_file->class_pool);

    error_func_pool:
    GEN_ARRAY_RELEASE(&object_file->func_pool);

    error_global_var_pool:
    GEN_ARRAY_RELEASE(&object_file->global_var_pool);

    error_linker:
    GEN_ARRAY_RELEASE(&object_file->link_table);

    error_name_table:
    GEN_ARRAY_RELEASE_PTR(&object_file->name_table);

    error_signature:
    DEBUG("[Loader] Class loading failed");
    free(object_file);
    return NULL;
}

void print_file_rep(file_rep_t *file) {
    printf("======= File Representation =======\n");

    printf("\nName Table (%d entries):\n", GEN_ARRAY_SIZE(&file->name_table));

    for (int i = 0; i < GEN_ARRAY_SIZE(&file->name_table); ++i) {
        printf("\t%d: %s\n", i, GEN_ARRAY_GET(&file->name_table, i));
    }

    printf("\nLink Table (%d entries):\n", file->link_table.size);

    for (int i = 0; i < file->link_table.size; ++i) {
        file_linker_ref_t *entry = &GEN_ARRAY_GET(&file->link_table, i);

        if (entry->tag >= LINK_TYPE_COUNT) {
            ERROR("[Loader] Bad link type: %d", entry->tag);
            return;
        }

        printf("\t%d: %s ", i, LINK_NAME[entry->tag]);
        switch (entry->tag) {
            case LINK_TYPE_INT:
            case LINK_TYPE_FLOAT:
            case LINK_TYPE_FIELD_REF:
            case LINK_TYPE_METHOD:
                printf("#%d #%d", entry->value, entry->extra);
                break;
            case LINK_TYPE_GLOBAL_VAR:
            case LINK_TYPE_FUNCTION:
            case LINK_TYPE_CLASS:
                printf("#%d", entry->value);
                break;
            default:
                // never reaches
                ERROR("[Loader] Bad link type: %d", entry->tag);
                return;
        }

        printf("\n");
    }

    printf("\nGlobal Variables (%d entries):\n", file->global_var_pool.size);

    for (int i = 0; i < file->global_var_pool.size; ++i) {
        file_global_var_t *entry = &GEN_ARRAY_GET(
            &file->global_var_pool, i
        );

        printf(
            "\t%d: %s :: ",
            i, GEN_ARRAY_GET(&file->name_table, entry->name_entry)
            );

        if (entry->var_type.type_tag == TYPES_TYPE_REF) {
            POOL_SIZE_T class_entry = entry->var_type.ref_class;
            printf("%s", GEN_ARRAY_GET(&file->name_table, class_entry));
        } else {

            if (entry->var_type.type_tag >= TYPES_COUNT) {
                ERROR(
                    "[Loader] Bad variable type: %d",
                    entry->var_type.type_tag
                    );
                return;
            }

            printf("%s", TYPE_NAME[entry->var_type.type_tag]);
        }

        printf("\n");
    }
}