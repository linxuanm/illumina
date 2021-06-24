#ifndef ILLUMINA_FILE_LOADER_H
#define ILLUMINA_FILE_LOADER_H

#include <inttypes.h>

#include "common/util/stream.h"
#include "common/util/generic_array.h"
#include "runtime/types.h"

typedef struct file_linker_ref_t {
    // the type of the reference
    uint8_t tag;

    uint32_t value;
    uint32_t extra;
} file_linker_ref_t;

void file_linker_load_entry(file_linker_ref_t *, stream_t *);

typedef struct file_global_var_t {
    POOL_SIZE_T name_entry; // ref to name table
    type_t var_type;
} file_global_var_t;

typedef struct file_func_t {

} file_func_t;

typedef struct file_field_t {
    uint8_t *field_name;
    type_t type;
    uint8_t flag;
} file_field_t;

typedef struct file_class_t {
    uint8_t *class_path;
    POOL_SIZE_T super_class; // ref to link table
    file_field_t *fields;
    POOL_SIZE_T *methods;  // ref to link table
} file_class_t;

void file_class_pool_load_entry(file_class_t *, stream_t *);

/*
 * Represents the content of a 'iasm' file.
 * For object code file structure, check the documentation.
 *
 * Each structure is separated into structs for future
 * additions to object code structure formatting, which
 * may greatly alter the content of each field.
 */
typedef struct file_rep_t {
    /*
     * A table used to reference the name of functions,
     * variables and classes to allow symbolic linking
     * during the loading phrase. Separated from the
     * linker for flexibility purposes.
     */
    GEN_ARRAY_T(uint8_t *) name_table;

    /*
     * Link table (linker) is used for dynamic symbolic
     * linking.
     */
    GEN_ARRAY_T(file_linker_ref_t) link_table;

    /*
     * Global var pool contains attributes of all variables
     * declared in the global scope.
     */
    GEN_ARRAY_T(file_global_var_t) global_var_pool;

    /*
     * A pool of functions.
     */
    GEN_ARRAY_T(file_func_t) func_pool;

    /*
     * Class pool contains all class representations, including
     * super class, methods and fields.
     */
    GEN_ARRAY_T(file_class_t) class_pool;
} file_rep_t;

file_rep_t *load_file_rep(stream_t *);
void print_file_rep(file_rep_t *);

#endif //ILLUMINA_FILE_LOADER_H
