Illumina Language
====================================

.. toctree::
   :maxdepth: 2
   :caption: Contents:

Illumina is a strong-typed programming language with simple, clear logistics and elegant syntax. Apart from providing high-level abstractions, it allows metaprogramming and flexible modifications by providing a native interface.

Installation
------------
Quick installation with :code:`brew`::
    
    brew install illumina

For a more detailed installation guide, check out :ref:`installation`.

Quick Start
-----------
Create a program file :code:`hello.lux` with the following code:

.. code-block:: illumina
    
    include io

    func main :: void ():
        io.println("Hello World");

Compile the program with the following command::
    
    illumina -c hello.lux

This creates the compiled bytecode file :code:`hello.iasm`. To execute the compiled code, run::

    illumina -e hello.iasm

The console should print out :code:`Hello World`!