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

/*extern TypeObject IntType;
extern TypeObject FloatType;
extern TypeObject CharType;
extern TypeObject ByteType;

typedef struct IntObject {
    OBJECT_PROPERTY
    int64_t intValue;
} IntObject;

typedef struct FloatObject {
    OBJECT_PROPERTY
    double floatValue;
} FloatObject;

typedef struct CharObject {
    OBJECT_PROPERTY
    uint16_t charValue;
} CharObject;

typedef struct ByteObject {
    OBJECT_PROPERTY
    uint8_t byteValue;
} ByteObject;*/

/*
 * Primitive types all default to 0,
 * which is NULL in the case of reference
 * object.
 */
typedef int64_t IntObject;
typedef double FloatObject;
typedef uint16_t CharObject;
typedef uint8_t ByteObject;
typedef uint16_t ReferenceObject;

extern ByteObject TrueBool;
extern ByteObject FalseBool;

#define TRUE &TrueBool;
#define FALSE &FalseBool;

#endif //ILLUMINA_PRIMITIVES_H
