#include "stream.h"

#include <stdlib.h>

#include "common/logging.h"
#include "common/util/assert.h"

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

uint8_t *stream_read_str(stream_t *stream, uint16_t size) {
    uint8_t *string = malloc((size + 1) * sizeof(uint8_t));
    ASSERT_MALLOC(string);

    for (int i = 0; i < size; ++i) {
        string[i] = stream_read_1(stream);
    }

    string[size] = '\0';

    return string;
}

void stream_from_file(stream_t *stream, const char *path) {
    FILE *file_ptr = fopen(path, "rb");
    fseek(file_ptr, 0, SEEK_END);

    stream->end = (unsigned long) ftell(file_ptr);

    fseek(file_ptr, 0, SEEK_SET);
    stream->bytes = malloc((stream->end + 1) * sizeof(uint8_t));
    fread(stream->bytes, sizeof(uint8_t), stream->end, file_ptr);
    fclose(file_ptr);

    stream->bytes[stream->end] = '\0';
}