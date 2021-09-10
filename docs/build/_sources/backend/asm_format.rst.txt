.. highlight:: c

Byte Code Format
================

Illumina uses a custom byte code set for its intermediate representation.

The structure of a :code:`.iasm` file is as follow:

* Header
* Name Table
* Constant Pool
* Global Variable Table
* Function List
* Class List

Header
------

The first 16 bytes of a byte code file is referred to as the header. The first 4 bytes act as the signature of a byte code file, and should always be :code:`0xAB 0xCD 0xDC 0xBA`. The following 12 bytes are placeholders, and currently serves no purpose.

Name Table
----------

Since symbolic names are discarded during compilation, name table is introduced to display formatted messages regarding the given code (e.g. tracebacks). It serves no purpose other than displaying messages.

The name table structure is described below::

    struct name_table {

        uint16_t size;

        struct {
            uint8_t length;
            char *name;
        } *entries;
    };