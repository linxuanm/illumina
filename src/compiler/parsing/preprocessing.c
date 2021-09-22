#include "preprocessing.h"

#include <stdlib.h>
#include <string.h>

#include "common/logging.h"
#include "common/specs.h"
#include "common/util/assert.h"

char *preprocess_code(const char *code) {
    FILE_SIZE_T code_len = strlen(code);
    FILE_SIZE_T curr = 0;
    FILE_SIZE_T line_count = 1; // line starts at 1 I guess?

    char *out = malloc(2 * sizeof(uint8_t)); // arbitrary larger size
    ASSERT_MALLOC(out);

    FILE_SIZE_T prev_indent = 0;
    FILE_SIZE_T curr_indent = 0;

    for (; curr < code_len;) {
        if (code[curr] == '\n') {
            out[curr++] = '\n';
            ++line_count;
            continue;
        }

        curr_indent = 0;
        while (code[curr] == ' ' || code[curr] == '\t') {
            curr_indent += code[curr] == ' ' ? 1 : INDENT_SIZE;
            ++curr;
        }

        if (curr_indent % 4 != 0) {
            ERROR("Incorrect indent size at line %ld", line_count);
            free(out);

            return NULL;
        }

        if (code[curr] != '\n') {
            //  TODO: DO THIS!
        }
    }

    return out;
}
