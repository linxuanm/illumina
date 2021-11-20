#include <check.h>
#include <stdlib.h>

#include "compiler/parsing/AST.h"
#include "cases.h"

START_TEST(empty_program) {
    program_t *ans = make_empty_program();

    ast_free_node(ans);
}
END_TEST

START_TEST(simple_program) {
    ck_assert_int_eq(15, 15);
}
END_TEST

Suite *parser_suite() {
    Suite *suite = suite_create("Parsing");

    TCase *empty = tcase_create("Empty Program");
    tcase_add_test(empty, empty_program);

    TCase *simple = tcase_create("Simple Program");
    tcase_add_test(simple, simple_program);

    suite_add_tcase(suite, simple);

    return suite;
}

int main() {
    int failed = 0;
    Suite *parser = parser_suite();
    SRunner *parser_runner = srunner_create(parser);

    srunner_run_all(parser_runner, CK_NORMAL);

    failed |= srunner_ntests_failed(parser_runner);

    srunner_free(parser_runner);

    return failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
