.. highlight:: illumina

Basic Syntax
============

Illumina is an imperative language with a design similar to that of `Modula-3 <https://en.wikipedia.org/wiki/Modula-3>`_.

It has a block-based layout, and uses indentation level to differentiate code blocks instead of the conventional braces :code:`{}` (much like `Python <https://en.wikipedia.org/wiki/Python_(programming_language)>`_).

Getting Started
---------------

Each code block in Illumina consists of a series of statements with the same indentation level. Statements are delimited by semi-colons :code:`;`. An example code block with a few assignments::

    foo = 12;
    bar = "hello";
    baz = true;

However, there are two problems with the above snippet if it is the entire content of an Illumina code file.

Firstly, the variables :code:`foo`, :code:`bar` and :code:`baz` are not defined. Illumina enforces explicit declaration of variables, and the above code will throw an :code:`undefined variable` error.

Secondly, each code file comprises numerous structure definition (i.e. functions and classes). All imperative code must be a part of a function. Note that the entry point for a code file is its :code:`main` function with no parameters (parameters alter the identity of a function, and will be explained later).

A runnable Illumina code that resembles the logic of the above code would be::

    func main :: void ():
        foo :: int = 12;
        bar :: String = "hello";
        baz :: bool = true;

The following sections will provide a more detailed illustration of each concept and syntactic construct mentioned above.

Variable Declaration
--------------------

Variable must be declared before being used or being assigned. A declaration of a variable consists of its name and type, in a format similar to that of `Paamayim Nekudotayim <https://en.wikipedia.org/wiki/Scope_resolution_operator>`_. Like demonstrated above::

    foo :: int; // declares variable 'foo' of type int

The declaration can also include an initial value for the variable::

    foo :: int = 42; // declares variable 'foo' of type int with value of 42

A variable can be specified as a constant by adding :code:`const` in its attribute list. An attribute list is a list surronded by parenthesis :code:`()` located before the name of the variable::

    (const) bar :: String = "Hello";

The attribute list is a recurring syntactic construct that  will later appear in declarations for functions and classes; each of them have a separate set of available attributes.

.. note::

    The :code:`const` attribute on a variable is automatically inferred by the compiler if the variable's value never changes before going out of scope. There are currently no VM level optimizations regarding the invariability of local variables, but some may be introduced in the future.

Variables can also be defined globally when declared in the outmost scope (directly inside the code file).

Types
-----

Primitive types are the most fundamental types in Illumina. Primitive implies immutability. In the scope of Illumina's source language (as opposed to type representation in the VM after compilation), there are 5 primitive types:

* :code:`int`, a 64-bit signed integer
* :code:`float`, a double-precision float
* :code:`char`, a 32-bit int representing a unicode character
* :code:`bool`, a boolean value of either :code:`true` or :code:`false`
* :code:`byte`, a single byte

.. note::
    
    All primitives whose size is less than a 32-bit int is treated in a 32-bit int container in the VM to eliminate byte padding and other unnecessary fuss.

Notably, :code:`void` do count as a type, but cannot be used as the type of a variable, and only exist to denote the return type of a function.

Meanwhile, despite looking like a primitive type, :code:`String` is not a primitive. The :code:`String` class, like many other default classes, belongs to the :code:`default` module, which is automatically included by the compiler.

Non-primitive types are defined by classes, and are usually named with a capital letter at the start (e.g. :code:`String`). All non-primitives are subclasses (see `OOP <https://en.wikipedia.org/wiki/Object-oriented_programming>`_) of the base object class :code:`Obj`.

Casting
-------

Casting is the process of changing a variable's type to its subclass or super class. Since the concept of variable type does not exist after compilation (note that this is not object type), casting only affects the compiler. The following code casts an object from :code:`MySuperClass` to :code:`MySubClass`::

    a :: MySuperClass = myObject;
    b :: MySubClass;

    b = (MySubClass) myObject;

.. note::

    Unlike languages like Java, the casting operator has a very high precedence.

In assignments where the assigned object's type does not match that of the variable's, auto-casting is performed, making the following code equivalent to the one above::

    a :: MySuperClass = myObject;
    b :: MySubClass;

    b = myObject;

To avoid unintended casting, this can be disabled by passing :code:`--disableAutoCast` to the compiler when compiling.

An exception to the casting rule is when casting across primitive types. Instead of changing the compile-time object type, values might be altered to accommodate the other type::

    // float -> int drops the tail
    floatVar :: float = 15.5;
    intVar :: int = floatVar; // note the auto-casting

    println(intVar); // 15

    // any number type -> bool is false if 0, true otherwise
    boolVar :: bool = floatVar;

    println(boolVar); // true

Include
-------

The :code:`include` keyword is used to use variables, functions and classes from another code file. Consider the following file :code:`someData.lux` with a few variables::

    // this is the entire content of the file
    mysteryNumber :: int = 69;
    mysteryAnimal :: String = "Alpaca";

In another file :code:`otherFile.lux`, the members of :code:`someData.lux` can be accessed by::

    include io
    include otherFile

    func main :: void ():
        println(mysteryNumber); // 69
        println(mysteryAnimal); // Alpaca

To avoid namespace pollution, a qualified import can be performed by specifying the desired name in a parenthesis directly after the module name::

    include io(myIO)

    func main :: void ():
        myIO.println("Hello");

Alternatively, a list of members to include can be specified::

    include io{println} // only 'println' is included

    func main :: void ():
        println("Hello");

List
----

A list is an ordered, variable-size collection. In Illumina, a list can only contain objects of a single type. The type of a list of type :code:`T` is writting as::
    
    [T]

An example declaration and assignment of an integer list::

    intList :: [int] = {1, 3, 5, 7, 9};

Lists support retrieving and assigning with an index. Like most programming languages, the list index starts at 0::

    println(intList)[1]; // 3
    intList[3] = 255; // changes the original 7 to 255

More operations can be found in the :ref:`docs_default_list` documentation.

As expected, lists are not primitive objects; in fact, they are implemented non-natively in the :code:`default` module.