#ifndef ILLUMINA_LINK_TABLE_H
#define ILLUMINA_LINK_TABLE_H

#include "common/specs.h"

/*
 * Each object code file has a dedicated link table
 * for symbolic linking. This allows more flexible
 * linking (instead of the previous compile-time
 * determined numeric entry IDs), and prepares for
 * the future dynamic object code loading scenario.
 *
 * The link table is similar to JVM's constant
 * pool (but with a separate string table, and stuff
 * don't take up 2 entries).
 */

//#define LINK_TYPE_

typedef struct link_table_ref_t {

    // the type of the reference
    uint8_t tag;

    uint32_t value;
    uint32_t extra;
} link_table_ref_t;

typedef struct link_table_t {
    LINK_TABLE_SIZE_T size;
    link_table_ref_t *const_references;
} link_table_t;

void link_table_init(LINK_TABLE_SIZE_T, link_table_t *);
void const_pool_release(link_table_t *);

#endif //ILLUMINA_LINK_TABLE_H
