#include "compiler_state.h"

__thread uint8_t compiler_errno;
__thread char compiler_err_msg[512];
