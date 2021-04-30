.. highlight:: illumina

.. _generics:

Generics
========

Generics allows more abstraction and generalization regarding type definition to enable better polymorphism. Generics in Illumina acts  like type templates that generate concrete types during compile-time. This is similar to type constructors in Haskell or templates in C++. Generics in Illumina is *not* compile-time.

The declaration of a generic type looks like::
    
    <TYPE>

After declaring, :code:`TYPE` can be used as if it is a type. Note that the declaration of a generic type can only occur in:

* In the generic declaration area of a function
* In the generic declaration area of a class definition

Note that a generic type can be a primitive type.

Generic Functions
-----------------

A generic function can be defined as such::

    func addToList :: void <T> (list :: [T], item :: T):
        list.add(item);

Type constraints can also be added::

    func testForStuff :: void <T :: MyInterface> (item :: Obj):
       println(item instanceof T);

