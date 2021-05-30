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

#define LINK_TYPE_INT 1
#define LINK_TYPE_FLOAT 2
#define LINK_TYPE_STRING 3
#define LINK_TYPE_GLOBAL_VAR 4
#define LINK_TYPE_FIELD_REF 5
#define LINK_TYPE_FUNCTION 6
#define LINK_TYPE_CLASS 7

#endif //ILLUMINA_LINK_TABLE_H
