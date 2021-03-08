#include "stream.h"

#include "common/logging.h"

uint8_t stream_read_1(stream_t *stream) {
    STREAM_CHECK_EOF(stream, 1);

    return stream->bytes[stream->pc++];
}

uint16_t stream_read_2(stream_t *stream) {
    STREAM_CHECK_EOF(stream, 2);

    return (uint16_t) stream->bytes[stream->pc++] << 8
           | stream->bytes[stream->pc++];
}

uint32_t stream_read_4(stream_t *stream) {
    STREAM_CHECK_EOF(stream, 4);

    uint32_t data = 0;
    for (int i = 0; i < 4; ++i) {
        data = data << 8 | stream->bytes[stream->pc++];
    }

    return data;
}

uint64_t stream_read_8(stream_t *stream) {
    STREAM_CHECK_EOF(stream, 8);

    uint64_t data = 0;
    for (int i = 0; i < 8; ++i) {
        data = data << 8 | stream->bytes[stream->pc++];
    }

    return data;
}