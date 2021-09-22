set(RUNTIME_HEADERS
        src/runtime/vm_error.h
        src/runtime/vm.h
        src/runtime/types.h
)

set(RUNTIME_SOURCES
        src/runtime/vm.c
        src/runtime/vm_error.c
)

message("Runtime Headers:")
log_list(RUNTIME_HEADERS)

message("Runtime Sources:")
log_list(RUNTIME_SOURCES)

list(APPEND ILLUMINA_HEADERS ${RUNTIME_HEADERS})
list(APPEND ILLUMINA_SOURCES ${RUNTIME_SOURCES})
