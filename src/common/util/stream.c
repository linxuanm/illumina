#include "stream.h"

#include "common/logging.h"

uint8_t stream_read_1(stream_t *stream) {
    if (stream->pc >= stream->end) {
        STREAM_CHECK_EOF(stream, 1);
    }

    return stream->bytes[stream->pc++];
}