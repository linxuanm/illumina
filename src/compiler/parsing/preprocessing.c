#include "preprocessing.h"

#include <stdlib.h>
#include <string.h>

#include "common/logging.h"
#include "common/specs.h"
#include "common/util/assert.h"

uint8_t *preprocess_code(uint8_t *code) {
    FILE_SIZE_T code_len = strlen((char *) code);
    FILE_SIZE_T curr = 0;
    FILE_SIZE_T line_count = 1; // line starts at 1 I guess?

    uint8_t *out = malloc(2 * sizeof(uint8_t)); // arbitrary larger size
    ASSERT_MALLOC(out);
    out[0] = '\0';

    FILE_SIZE_T prev_indent = 0;
    FILE_SIZE_T curr_indent = 0;

    for (; curr < code_len;) {

        if (code[curr] == '\n') {
            strncat((char *) out, "\n", 1);
            ++curr;
            ++line_count;
            continue;
        }

        curr_indent = 0;
        while (curr < code_len && (code[curr] == ' ' || code[curr] == '\t')) {
            curr_indent += code[curr] == ' ' ? 1 : INDENT_SIZE;
            ++curr;
        }

        if (curr >= code_len) break;

        if (curr_indent % INDENT_SIZE != 0) {
            ERROR("Incorrect indent size at line %ld", line_count);
            free(out);

            return NULL;
        }

        if (code[curr] != '\n') {
            curr_indent /= INDENT_SIZE;

            if (curr_indent > prev_indent) {
                for (FILE_SIZE_T i = 0; i < curr_indent - prev_indent; ++i) {
                    strcat((char *) out, "$in$");
                }
            } else if (curr_indent < prev_indent) {
                for (FILE_SIZE_T i = 0; i < prev_indent - curr_indent; ++i) {
                    strcat((char *) out, "$de$");
                }
            }

            prev_indent = curr_indent;

            while (curr < code_len && code[curr] != '\n') {
                strncat((char *) out, (char *) &code[curr], 1);
            }
        }
    }
    printf("%s", out);
    return out;
}
