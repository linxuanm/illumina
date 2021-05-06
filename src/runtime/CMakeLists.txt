set(RUNTIME_HEADERS
        src/runtime/vm_error.h
        src/runtime/vm.h
        src/runtime/loader/file_loader.h
        src/runtime/structure/object_file.h
        src/runtime/structure/const_pool.h
        src/runtime/structure/name_table.h
)

set(RUNTIME_SOURCES
        src/runtime/vm.c
        src/runtime/vm_error.c
        src/runtime/loader/file_loader.c
        src/runtime/structure/const_pool.c
        src/runtime/structure/name_table.c
)

message("Runtime Headers:")
log_list(RUNTIME_HEADERS)

message("Runtime Sources:")
log_list(RUNTIME_SOURCES)

list(APPEND ILLUMINA_HEADERS ${RUNTIME_HEADERS})
list(APPEND ILLUMINA_SOURCES ${RUNTIME_SOURCES})