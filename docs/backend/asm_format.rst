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