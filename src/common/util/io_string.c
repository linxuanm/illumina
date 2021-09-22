#include "io_string.h"

#include <stdio.h>
#include <stdlib.h>

#include "common/util/assert.h"

FILE_SIZE_T read_from_file(uint8_t *target, const char *path) {
    FILE *file_ptr = fopen(path, "rb");
    fseek(file_ptr, 0, SEEK_END);

    FILE_SIZE_T length = (FILE_SIZE_T) ftell(file_ptr);
    fseek(file_ptr, 0, SEEK_SET);

    target = malloc((length + 1) * sizeof(uint8_t));
    ASSERT_MALLOC(target);

    fread(target, sizeof(uint8_t), length, file_ptr);
    fclose(file_ptr);

    target[length] = '\0';

    return length;
}
