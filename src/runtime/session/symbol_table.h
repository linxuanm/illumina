#ifndef ILLUMINA_SYMBOL_TABLE_H
#define ILLUMINA_SYMBOL_TABLE_H

#include "runtime/specs.h"

/*
 * Each session (object code file) has a dedicated symbol table
 * for symbolic links. Entries and their corresponding links
 * are determined during compile-time.
 *
 * This is independent from the VM due to the need to dynamically
 * load an object code file.
 *
 * (Note that "symbolic references" here are not actually symbolic
 * references; they merely provide a linking between opcode args
 * and VM objects)
 */

#define SYM_TYPE_SINGLE_DATA 1
#define SYM_TYPE_DOUBLE_DATA 2
#define SYM_TYPE_TABLE_PTR 3

typedef struct sym_ref_t {

    // the type of the symbolic reference
    uint8_t tag;

    uint32_t value;
    uint32_t extra;
} sym_ref_t;

typedef struct sym_table_t {
    SYM_TABLE_SIZE_T size;
    sym_ref_t *sym_references;
} sym_table_t;

sym_table_t *sym_table_init(SYM_TABLE_SIZE_T);
void sym_table_release(sym_table_t *);

#endif //ILLUMINA_SYMBOL_TABLE_H
