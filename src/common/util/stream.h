#ifndef ILLUMINA_STREAM_H
#define ILLUMINA_STREAM_H

#include <inttypes.h>

#include "common/logging.h"
#include "common/specs.h"
#include "runtime/vm_error.h"

typedef FILE_SIZE_T stream_size_t;

typedef struct stream_t {
    stream_size_t pc;
    stream_size_t end;
    uint8_t *bytes;
    uint8_t error;
} stream_t;

#define STREAM_CHECK_EOF(s, x) \
    do {\
        if ((s)->error == 1) return 0;\
        if ((s)->pc + (x) > (s)->end) {\
            (s)->error = 1;\
            ERROR("EOF while reading from byte stream");\
            VM_SET_THREAD_ERRNO(VM_ERRNO_EOF);\
            return 0;\
        }\
    } while (0)

uint8_t stream_read_1(stream_t *);
uint16_t stream_read_2(stream_t *);
uint32_t stream_read_4(stream_t *);
uint64_t stream_read_8(stream_t *);

uint8_t *stream_read_str(stream_t *, uint8_t);

// load stream from file
stream_t *stream_from_file(const char *);

#endif //ILLUMINA_STREAM_H
