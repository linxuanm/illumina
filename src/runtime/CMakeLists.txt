set(RUNTIME_HEADERS
        src/runtime/specs.h
        src/runtime/loader/fileloader.h
        src/runtime/vm.h
)

set(RUNTIME_SOURCES
        src/runtime/loader/fileloader.c
        src/runtime/vm.c
)

message("Runtime Headers:")
log_list(RUNTIME_HEADERS)

message("Runtime Sources:")
log_list(RUNTIME_SOURCES)

list(APPEND ILLUMINA_HEADERS ${RUNTIME_HEADERS})
list(APPEND ILLUMINA_SOURCES ${RUNTIME_SOURCES})