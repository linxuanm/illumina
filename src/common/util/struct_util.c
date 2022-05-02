#include "struct_util.h"

bool array_eq(GArray *a, GArray *b, bool cmp_func(void *, void *)) {
    if (a->len != b->len) return false;

    for (int i = 0; i < a->len; ++i) {
        void *fst = g_array_index(a, void *, i);
        void *snd = g_array_index(b, void *, i);
        if (!cmp_func(fst, snd)) return false;
    }

    return true;
}
