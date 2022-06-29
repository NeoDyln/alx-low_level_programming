# About
- This folder contains infor about creating static libraries with C

## Basics
### main.h
- This file lists all the prototypes of the functions used

### All .c files
- These are c programs each doing a particular function. Note that some are similar to previously done functions

### All .o files
- These are compiled .c files that we'll add to the archive. Compilation was done using " gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c  " which essentially collects all .c files and compiles them into .o files each with its .c name

### ar -rc archive_name.a *.o
- This is a command I shall use to add all .o files to archive whose name I shall determine on run...in this case, it was libmy.a
