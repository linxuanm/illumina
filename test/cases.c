#include "cases.h"

program_t *make_empty_program() {
    program_t *node = malloc(sizeof(program_t));
    node->kind = PROGRAM;
    node->val.program.vars = g_array_new(FALSE, FALSE, sizeof(program_t *));

    return node;
}
