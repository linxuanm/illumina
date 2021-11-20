#include <check.h>
#include <stdlib.h>

START_TEST(simple_program) {
    ck_assert_int_eq(15, 15);
}
END_TEST

Suite *parser_suite() {
    Suite *suite = suite_create("Parsing");

    TCase *simple = tcase_create("Simple Program");
    tcase_add_test(simple, simple_program);
    suite_add_tcase(suite, simple);

    return suite;
}

int main() {
    Suite *parser = parser_suite();
    SRunner *runner = srunner_create(parser);

    srunner_run_all(runner, CK_NORMAL);

    int failed = srunner_ntests_failed(runner);

    srunner_free(runner);

    return failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
