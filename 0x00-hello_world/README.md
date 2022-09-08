(0-preprocessor) gcc -E $CFILE > c - a script that runs a C file through the preprocessor and save the result into another file
(1-compiler) gcc -c $CFILE - a script that compiles a C file but does not link
(2-assembler) gcc -S $CFILE - a script that generates the assembly code of a C code and save it in an output file
(3-name) gcc $CFILE -o cisfun - a script that compiles a C file and creates an executable named cisfun
(4-puts.c) #include <stdio.h> - a C program that prints a text followed by a new line
