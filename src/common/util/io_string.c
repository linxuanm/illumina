#include "io_string.h"

#include <stdio.h>
#include <stdlib.h>

#include "common/util/assert.h"

// TODO: wchat_t and proper file error handling
FILE_SIZE_T read_from_file(uint8_t **target, const char *path) {
    FILE *file_ptr = fopen(path, "r");

    if (!file_ptr) {
        ERROR("Path %s does not exist", path);
        return 0;
    }

    fseek(file_ptr, 0, SEEK_END);

    FILE_SIZE_T length = (FILE_SIZE_T) ftell(file_ptr);
    fseek(file_ptr, 0, SEEK_SET);

    (*target) = malloc((length + 1) * sizeof(uint8_t));
    ASSERT_MALLOC((*target));

    fread((*target), sizeof(uint8_t), length, file_ptr);
    fclose(file_ptr);

    (*target)[length] = '\0';

    return 0;
}

/*char **split_str(const char *str, const char *delim) {

}*/
