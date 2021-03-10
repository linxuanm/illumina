#include "vm.h"

#include <stdlib.h>

void runtime_init(runtime_t *runtime) {

}

void runtime_release(runtime_t *runtime) {
    free(runtime);
}
