#ifndef ILLUMINA_VM_ERROR_H
#define ILLUMINA_VM_ERROR_H

#include <inttypes.h>

#define VM_ERRNO_EOF 1
#define VM_ERRNO_BAD_FILE_FORMAT 2

extern __thread uint8_t vm_thread_errno;

#define VM_SET_THREAD_ERRNO(x) \
    do {\
        if (vm_thread_errno == 0) vm_thread_errno = (x);\
    } while (0)

#define VM_RETURN_IF_ERROR(x) \
    do {\
        if (vm_thread_errno != 0) return x;\
    } while (0)

#define VM_GOTO_IF_ERROR(x) \
    do {\
        if (vm_thread_errno != 0) goto x;\
    } while (0)

#define VM_THREAD_ERRNO vm_thread_errno

#endif //ILLUMINA_VM_ERROR_H
