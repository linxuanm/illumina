#ifndef ILLUMINA_STRUCT_UTIL_H
#define ILLUMINA_STRUCT_UTIL_H

#include <glib.h>
#include <stdbool.h>

bool array_eq(GArray *, GArray *, bool (void *, void *));

#endif //ILLUMINA_STRUCT_UTIL_H
