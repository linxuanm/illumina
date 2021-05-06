#include "file_loader.h"

#include "common/logging.h"

file_rep_t load_file_rep(stream_t *stream) {
    file_rep_t object_file;

    // header
    if (stream_read_4(stream) != 0xABCDDCBA) {
        ERROR("Invalid object file signature (expected 0xABCDDCBA)");
        VM_SET_THREAD_ERRNO(VM_ERRNO_BAD_FILE_FORMAT);
        return object_file;
    }

    stream_read_4(stream);
    stream_read_8(stream);

    return object_file;
}