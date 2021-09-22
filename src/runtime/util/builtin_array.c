#include "builtin_array.h"

builtin_array_t *make_array(uint32_t init_size, uint16_t obj_size) {
    builtin_array_t *ptr = malloc(obj_size * init_size);
    ASSERT_MALLOC(ptr);

    ptr->elem_size = obj_size;
    ptr->size = init_size;
    ptr->alloc_size = init_size;

    return ptr;
}
