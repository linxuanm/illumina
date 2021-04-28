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

However, there are two problems with the above snippet.

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

