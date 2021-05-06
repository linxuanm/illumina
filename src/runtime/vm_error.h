#ifndef ILLUMINA_VM_ERROR_H
#define ILLUMINA_VM_ERROR_H

#include <inttypes.h>

#define VM_ERRNO_EOF 1
#define VM_ERRNO_BAD_FILE_FORMAT 2

extern __thread uint8_t vm_thread_errno;

#define VM_SET_THREAD_ERRNO(x) vm_thread_errno = (x)
#define VM_THREAD_ERRNO vm_thread_errno

#endif //ILLUMINA_VM_ERROR_H
