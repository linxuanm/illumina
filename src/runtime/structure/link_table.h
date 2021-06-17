#ifndef ILLUMINA_LINK_TABLE_H
#define ILLUMINA_LINK_TABLE_H

#include <common/util/stream.h>
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

/*
 * A LINK_TYPE_INT field takes up 2 units (8 bytes),
 * storing the upper and lower byte representation
 * of a 64-bit integer.
 */
#define LINK_TYPE_INT 1

/*
 * A LINK_TYPE_FLOAT field takes up 2 units (8 bytes),
 * storing the first and second 32-bit of a double.
 */
#define LINK_TYPE_FLOAT 2

/*
 * A LINK_TYPE_STRING takes up 1 unit, and points to
 * an entry in the name table.
 */
#define LINK_TYPE_STRING 3

/*
 * A LINK_TYPE_GLOBAL_VAR takes up 2 units, pointing
 * to a name reference in the name table and a global
 * variable table entry respectively.
 */
#define LINK_TYPE_GLOBAL_VAR

/*
 * A LINK_TYPE_FIELD_REF takes up 2 units, pointing
 * to a class reference and a name entry in name
 * table respectively.
 */
#define LINK_TYPE_FIELD_REF 5

/*
 * A LINK_TYPE_FUNCTION takes up 1 unit, to a function
 * signature in the name table.
 */
#define LINK_TYPE_FUNCTION 6

/*
 * A LINK_TYPE_CLASS takes up 1 unit, to a class path
 * in the name table.
 */
#define LINK_TYPE_CLASS 7

#endif //ILLUMINA_LINK_TABLE_H
