set(RUNTIME_HEADERS src/runtime/loader/fileloader.h)
set(RUNTIME_SOURCES src/runtime/loader/fileloader.c)

list(APPEND ILLUMINA_HEADERS ${RUNTIME_HEADERS})
list(APPEND ILLUMINA_SOURCES ${RUNTIME_SOURCES})