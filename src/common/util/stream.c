#include "stream.h"

#include <stdlib.h>

#include "common/logging.h"
#include "common/util/assert.h"
#include "common/util/io_string.h"

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

uint8_t *stream_read_str(stream_t *stream, uint8_t size) {
    uint8_t *string = malloc((size + 1) * sizeof(uint8_t));
    ASSERT_MALLOC(string);

    for (int i = 0; i < size; ++i) {
        string[i] = stream_read_1(stream);
    }

    string[size] = '\0';

    return string;
}

stream_t *stream_from_file(const char *path) {
    stream_t *stream = malloc(sizeof(stream_t));
    ASSERT_MALLOC(stream);

    stream->pc = 0;
    stream->error = 0;

    stream->end = read_from_file(stream->bytes, path);

    return stream;
}
