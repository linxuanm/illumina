add_executable(
        Illumina
        main.c

        runtime/struct/frame.c
        runtime/object/primitives.c
        runtime/bytecode/bytefuncs.c
        runtime/struct/thread.c)