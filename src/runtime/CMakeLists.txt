set(RUNTIME_HEADERS src/runtime/loader/fileloader.h)
set(RUNTIME_SOURCES src/runtime/loader/fileloader.c)

message("Runtime Headers:")
log_list(RUNTIME_HEADERS)

message("Runtime Sources:")
log_list(RUNTIME_SOURCES)

list(APPEND ILLUMINA_HEADERS ${RUNTIME_HEADERS})
list(APPEND ILLUMINA_SOURCES ${RUNTIME_SOURCES})