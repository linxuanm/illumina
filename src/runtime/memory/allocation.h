#ifndef ILLUMINA_ALLOCATION_H
#define ILLUMINA_ALLOCATION_H

/*
 * WIP: Since integer allocations occurs very often
 * and therefore needs to be fast, here is a
 * custom implementation of its allocation.
 */
#define NEW_INT malloc(sizeof(IntObject))

#endif //ILLUMINA_ALLOCATION_H
