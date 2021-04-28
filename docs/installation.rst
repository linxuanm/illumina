.. highlight:: sh

.. _installation:

Installation
============

Illumina's compiler and runtime are bundled together at the moment, and only require a single installation (same for developing and deploying).

.. note::
    
    Since packaging the compiler and runtime together creates burden on deployment platforms where the compilation tools are irrelevant, the two may be separated in the future.

To check your installation::

    illumina -v

With Brew
----

Installing via Brew is preferred::

    brew install illumina

With an Installer
---------

Select a release on Illumina's `releases page <https://github.com/davidmaamoaix/Illumina/releases>`_ and download the installer for your operating system.

Currently supported platforms (for the installer) are:

* Windows
* Mac OS

Building from Source
--------------------

Clone the source repository with::

    git clone https://github.com/davidmaamoaix/Illumina.git

*TODO: add this*