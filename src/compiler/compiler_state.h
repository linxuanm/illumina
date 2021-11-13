#ifndef ILLUMINA_COMPILER_STATE_H
#define ILLUMINA_COMPILER_STATE_H

#include <inttypes.h>
#include <stdio.h>

/*
 * should never happen; only used for sanity
 * check in dev mode.
 */
#define SANITY_CHECK 0

#define IO_ERROR 1
#define SYNTAX_ERROR 2

extern __thread uint8_t compiler_errno;
extern __thread char compiler_err_msg[512];

#define COMPILER_SET_ERRNO(x, msg, args...) \
    do {\
        if (compiler_errno == 0) {\
            compiler_errno = (x);\
            snprintf(compiler_err_msg, 512, msg, ##args);\
        }\
        ERROR(msg, ##args);\
    } while (0)

#endif //ILLUMINA_COMPILER_STATE_H
