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

Declaration
-----------

