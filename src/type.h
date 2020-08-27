/*
 * This class represents the generic of objects, including the underlying
 * of semantics that is common to all heap objects of Illumina.
 */
#ifndef ILLUMINA_TYPE_H
#define ILLUMINA_TYPE_H

#include <stdint.h>

typedef struct TypeObject {
    uint16_t size;
} TypeObject;

#define OBJECT_PROPERTY \
        uint8_t reachable; \
        TypeObject *type;

#define INIT_OBJ(type) 0, type;

#define OBJECT_PROPERTY_SIZE \
        sizeof(uint8_t) + sizeof(TypeObject)

#endif //ILLUMINA_TYPE_H
