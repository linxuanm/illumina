#ifndef ILLUMINA_SYMBOL_TABLE_H
#define ILLUMINA_SYMBOL_TABLE_H

/*
 * Each session (object code file) has a dedicated symbol table
 * for symbolic links. Entries and their corresponding links
 * are determined during compile-time.
 *
 * This is independent from the VM due to the need to dynamically
 * load an object code file.
 */

typedef struct sym_table_t {

} sym_table_t;

#endif //ILLUMINA_SYMBOL_TABLE_H
