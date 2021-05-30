#ifndef ILLUMINA_OBJECT_FILE_H
#define ILLUMINA_OBJECT_FILE_H

#include "runtime/structure/name_table.h"
#include "runtime/structure/link_table.h"

/*
 * Represents the content of a 'iasm' file.
 * For object code file structure, check the documentation.
 */
typedef struct file_rep_t {
    name_table_t name_table;
    link_table_t link_table;
} file_rep_t;

#endif //ILLUMINA_OBJECT_FILE_H
