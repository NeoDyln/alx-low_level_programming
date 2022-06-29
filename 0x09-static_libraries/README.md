# About
- This folder contains infor about creating static libraries with C

## Basics
## Static Libraries
- These are objects of code that one has written and wishes to reuse later on by pulling all of them into one archive
- Static libraries are different in that they are linked at run time to the programs using it unlike others which copy code into the main program file.

### main.h
- This file lists all the prototypes of the functions used

### All .c files
- These are c programs each doing a particular function. Note that some are similar to previously done functions

### All .o files
- These are compiled .c files that we'll add to the archive. Compilation was done using " gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c  " which essentially collects all .c files and compiles them into .o files each with its .c name

### Creating the static library
- This involves adding all .o files to archive whose name I shall determine on run...in this case, it was libmy.a
- Command is " ar -rc archive_name.a *.o "

### create_static_lib.sh
- This is more or less everything I did above here but in one shell script
- The first line with " #!/bin/bash  " tells the program to use the bas terminal to run
- The second line is similar to the compilation function above (Check All .o files section) and it simply makes the .o files
- The third line is the command " ar -rc archive_name.a *.o  " that basically takes all .o files and adds them to an archive we've name
