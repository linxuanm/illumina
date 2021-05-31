#ifndef ILLUMINA_FILE_LOADER_H
#define ILLUMINA_FILE_LOADER_H

#include "common/util/stream.h"

/*
 * A table used to reference the name of functions,
 * variables and classes to allow symbolic linking
 * during the loading phrase. Separated from the
 * linker for flexibility purposes.
 */
typedef struct file_name_table_t {
    NAME_TABLE_SIZE_T size;
    uint8_t **names;
} file_name_table_t;

void file_name_table_init(NAME_TABLE_SIZE_T, file_name_table_t *);
void file_name_table_release(file_name_table_t *);

typedef struct file_linker_ref_t {

    // the type of the reference
    uint8_t tag;

    uint32_t value;
    uint32_t extra;
} file_linker_ref_t;

typedef struct file_linker_t {
    POOL_SIZE_T size;
    file_linker_ref_t *links;
} file_linker_t;

void file_linker_init(POOL_SIZE_T, file_linker_t *);
void file_linker_release(file_linker_t *);
void file_linker_load_entry(file_linker_ref_t *, stream_t *);

typedef struct file_class_t {

} file_class_t;

typedef struct file_class_pool_t {
    POOL_SIZE_T size;
    file_class_t *classes;
} file_class_pool_t;

void file_class_pool_init(POOL_SIZE_T, file_class_pool_t *);
void file_class_pool_release(file_class_pool_t *);
void file_class_pool_load_entry(file_class_pool_t *, stream_t *);

/*
 * Represents the content of a 'iasm' file.
 * For object code file structure, check the documentation.
 *
 * Each structure is separated into structs for future
 * additions to object code structure formatting, which
 * may greatly alter the content of each field.
 */
typedef struct file_rep_t {
    file_name_table_t name_table;
    file_linker_t link_table;
    file_class_pool_t class_pool;
} file_rep_t;

file_rep_t *load_file_rep(stream_t *);

#endif //ILLUMINA_FILE_LOADER_H
