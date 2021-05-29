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
 * The link table is very similar to JVM's constant
 * pool (but with a separate string table, and stuff
 * don't take up 2 entries).
 */

#define SYM_TYPE_SINGLE_DATA 1
#define SYM_TYPE_DOUBLE_DATA 2
#define SYM_TYPE_TABLE_PTR 3

typedef struct const_pool_ref_t {

    // the type of the reference
    uint8_t tag;

    uint32_t value;
    uint32_t extra;
} const_pool_ref_t;

typedef struct const_pool_t {
    LINK_TABLE_SIZE_T size;
    const_pool_ref_t *const_references;
} const_pool_t;

void const_pool_init(LINK_TABLE_SIZE_T, const_pool_t *);
void const_pool_release(const_pool_t *);

#endif //ILLUMINA_LINK_TABLE_H
