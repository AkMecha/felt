This is the README file for an _unofficial_, _experimental_ version of
FElt - a package for introductory level finite element analysis.


For the official FElt, please visit the original homepage at
http://felt.sourceforge.net. Attention: do NOT bother the original
authors of FElt if you find a bug with the version hosted here.


I created this git repository from the original CVS tree at
sourceforge, in order to hack more easily on the code.  No major new
functionality is planned at the moment, at least before the following
targets are completed:

- clean build with latest gcc compiler on latest linux system.
- removal of obsolete, pre-ANSI code and general code cleanup & simplification
- better extensibility & customization through the use of lua.
- investigate use of external libraries (eg. gsl) for matrix operations
- better build system, based on CMake
- better translations, based on gettext
- rewrite graphical subprograms using a modern toolkit (eg. gtk+ / Qt)


I also plan to sync with upstream, whenever a new version of FElt is released.

Pre-requisites :

    Git
    GCC 7.3.0
    Flex
    Bison
    Boost 1.40.0
    CMake
    Make

To install all the pre-requisites, run the following command :

sudo apt-get install build-essential make gcc flex cmake bison boost git-core

To clone this repository run :

git clone https://github.com/Sudhanshu-Dubey14/felt.git 

Then run these commands one by one :

`cd felt

mkdir build

cd build

cmake ..

make

make install`

This will install FElt in your system.
