/*
 * This class represents the generic of objects, including the underlying
 * of semantics that is common to all heap objects of Illumina.
 */
#ifndef ILLUMINA_TYPE_H
#define ILLUMINA_TYPE_H

typedef struct TypeObject {
    unsigned int size;
} TypeObject;

#define OBJECT_PROPERTY \
        unsigned int reachable; \
        TypeObject *type;

#define OBJECT_PROPERTY_SIZE \
        sizeof(unsigned int) + sizeof(TypeObject)

#endif //ILLUMINA_TYPE_H
