# Bangle
Bangle is a compiled, statically typed programming language with C adjacent syntax\
It will contain a standard library with custom implementations of dynamic arrays, hash maps, etc.\
Compiles into NASM assembly, NASM is then invoked for machine code generation, which is then linked with the GNU linker
## Features:
Initial compiler is written in C, eventually self hosted\
Supports inline NASM with the `nasm()` unary operator\
Structs with associated methods
### Data types:
- 8 bit integer `byte`
- 16 bit `short`
- 32 bit `int`
- 64 bit `long`
- 32 bit float `float`
- 64 bit `double`
- Char (internally byte but has some convenient ASCII related operations)
- String (dynamic array with string operations)
- Static arrays

The provided makefile will quickly create an executable in the root directory, but simply compiling `main.c` directly in any manner will work.
