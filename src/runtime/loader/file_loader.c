#include "file_loader.h"

#include <stdlib.h>

#include "common/logging.h"
#include "runtime/structure/name_table.h"

file_rep_t *load_file_rep(stream_t *stream) {
    file_rep_t *object_file = malloc(sizeof(file_rep_t));

    // header
    if (stream_read_4(stream) != 0xABCDDCBA) {
        ERROR("Invalid object file signature (expected 0xABCDDCBA)");
        VM_SET_THREAD_ERRNO(VM_ERRNO_BAD_FILE_FORMAT);
        return object_file;
    }

    stream_read_4(stream);
    stream_read_8(stream);

    // name table
    NAME_TABLE_SIZE_T name_table_size = stream_read_4(stream);
    name_table_init(name_table_size, &object_file->name_table);

    for (int i = 0; i < name_table_size; ++i) {
        uint16_t name_length = stream_read_2(stream);

        object_file->name_table.names[i] = stream_read_str(stream, name_length);
    }

    // link table
    LINK_TABLE_SIZE_T link_table_size = stream_read_4(stream);
    link_table_init(link_table_size, &object_file->link_table);

    for (int i = 0; i < link_table_size; ++i) {
        link_table_load_entry(&object_file->link_table.links[i], stream);
    }

    VM_RETURN_IF_ERROR(object_file);

    // end of structure setup

    // classes


    return object_file;
}