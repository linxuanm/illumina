#ifndef ILLUMINA_PRIMITIVES_H
#define ILLUMINA_PRIMITIVES_H

#include <stdint.h>

#include "type.h"

/*
 * Declaration of references of primitive types
 * are (obviously) singleton and is common across
 * VMs in an attempt to alleviate allocation overheads
 * when launching a VM (under the assumption that no
 * one is crazy enough to modifier properties of
 * primitives per VM instance).
 *
 * Boolean is treated as an IntType whose value is
 * 0 or 1.
 */
extern TypeObject IntType;
extern TypeObject FloatType;
extern TypeObject CharType;

typedef struct IntObject {
    OBJECT_PROPERTY
    int64_t intValue;
} IntObject;

#endif //ILLUMINA_PRIMITIVES_H
