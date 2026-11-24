/*
Bangle Compiler:
-------------------------------------------------------------------------------------------------
Compiled, statically typed programming language with C adjacent syntax with extra features
Will compile to NASM assembly and invoke the NASM assembler and GNU linker 
Supports inline NASM similar to C supporting inline AT&T syntax asm
Initial compiler is written in C, eventually self hosted
-------------------------------------------------------------------------------------------------
Data types:
byte (8 bit int)
short (16 bit int)
int (32 bit int)
long (64 bit int)

char (8 bit data with ascii operations)
string (zesty c style string probably)

float (single floating point)
double (double floating point)
-------------------------------------------------------------------------------------------------
Will have a standard library which will be ports of my own memory allocators, dynamic array, hash map, etc
*/

#include <stdio.h>
#include "pipeline/lexicalAnalysis.c"

int main(int argc, char* argv[])
{
    if (argc != 2) // Validate args
    {
        printf("usage: ./bangle source.b");
        return 1;
    }
    printf("-- Bangle Compiler --\n");
   
    // Create functions pertaining to the steps of a compiler:
    /*
    tokenStream tokens = lexicalAnalyzer(sourceCode);
    Lexical Analyzer: Takes raw source file and converts into a 
    sequence of tokens. Recognizes and removes comments, white space, 
    reports some syntax errors.

    abstractSyntaxTree codeAST syntaxAnalyzer(tokens);
    Syntax Analyzer: Takes token stream and detects syntax errors 
    against language syntax, outputs an Abstract Syntax Tree. 

    annotatedSyntaxTree codeAnST semanticAnalyzer(codeAST);
    Semantic Analyzer: Takes syntax tree and detects static 
    semantic errors, such as undeclared/redefined variables/types/functions, 
    type related errors, creating objects from abstract base classes, too few or 
    too many function args, or unreachable statements. Outputs a syntax tree, may 
    contain annotation information. 

    fileText nasmOutput codeGeneration(codeAnST);
    Code Generator: Takes annotated syntax tree and builds single
    NASM assembly file of the entire program.

    run fileText through NASMW
    run nasm through linker
    :)
    */
    return 0;
}