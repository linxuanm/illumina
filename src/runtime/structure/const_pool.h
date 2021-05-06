#ifndef ILLUMINA_CONST_POOL_H
#define ILLUMINA_CONST_POOL_H

#include "runtime/specs.h"

/*
 * Each object code file has a dedicated constant pool
 * for dynamic linking. Entries and their corresponding
 * links are determined during compile-time.
 *
 * This is independent from the VM due to the need to dynamically
 * load an object code file.
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
    CONST_POOL_SIZE_T size;
    const_pool_ref_t *const_references;
} const_pool_t;

const_pool_t *const_pool_init(CONST_POOL_SIZE_T);
void const_pool_release(const_pool_t *);

#endif //ILLUMINA_CONST_POOl_H
