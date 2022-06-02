# About #
- This folder contains various scripts of the C programming language as defined below.
- Each of these is Betty linter compliant

## 0-preprocessor ##
- Here we use the gcc-E command to compile the c file and (-o file_receiving) to output it to our desired location
- Syntax: gcc -E file_being_compiled -o results_output_file

## 1-Compiler ##
- Here we compile agai using the gcc command but we do not link (-o is the option that allows us to link ) .
- C compilers first preprocess, then compile, then assemble then link
- Syntax: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c file_being_compiled

## 2-assembler ##
- Here the script generates an assembly code file from the source c file as below and saves it as an assembly file
- Syntax: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -S file_being_compiled

## 3-name ##
- Here, we are compiling a file and making an executable out of it with a certain name
- Syntax: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c file_being_compiled -o compiled_resultts_file

## 4-puts.c ##
- Here we coded a C program that uses the puts function to output a line of text we want
- Syntax:
-- #include <stdio.h>
-- int main(){puts("text_you_want"); return 0;}
