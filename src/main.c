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