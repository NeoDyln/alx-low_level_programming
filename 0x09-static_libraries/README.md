# About
- This folder contains infor about creating static libraries with C
- For this particular project, I had a set of C files (All those in the project) that I needed to compile and assemble then create a single library with all those assembled (.o) files which I named libmy.a
- I was also required to create a single shell script (.sh) that does all that I just explained above

## Basics
## Static Libraries
- These are objects of code that one has written and wishes to reuse later on by pulling all of them into one archive
- Static libraries are different in that they are linked at run time to the programs using it unlike others which copy code into the main program file.

### Creation of static libraries
- Think of static libraries as ready-to-run bundles of machine code that only need to be included in a program for them to run
- The `ar` command is usually what we'd use to create these archives
- All static libraries though need to be indexed before they can properly be used and to do this, we make use of the `ranlib` command
- ***Point to note though***
	- All libraries must have a prefix of "lib" and a suffix of ".a"

### Indexing the libraries with `ranlib`
- Imagine you were searching for something in a line of sorted and uniquely identified items and only knew its unique identifier...Wouldn't that make finding it much easier?
- Same case with indexing archives/ libraries...it helps identify the most recent to oldest by a unique identifier both in the archive and in memory
- To do this we just simply do
	```
	ranlib libarchiveName.a
	```

### Running the indexed library with a program
-  To run a program with a static file, we can make use of the `gcc -o` command to make an executable which we then run...but there'll be a few modifications to the command like so
	- First we must include the .c file that has our main function
	- Then we tell the gcc command where to search for our library using the `-L<directorypath>`
		- By default, its usually `-L.` to mean the current directory
	- Then we list the archive name with the `-l` option and without the "lib" prefix and ".a" suffix like so
		- `... -larchiveName ...`
	- Finally we use the `-o executableName` to finish the command hence at the end of the day, we'd have something like:
```
gcc main.c -L<directorypath> -larchiveName -o executableName
``` 

### main.h
- This file lists all the prototypes of the functions used

### All .c files
- These are c programs each doing a particular function. Note that some are similar to previously done functions

### All .o files
- These are compiled .c files that we'll add to the archive. Compilation was done using 
``` shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
```
- which essentially collects all .c files and compiles them into .o files each with its .c name

### Creating the static library
- This involves adding all .o files to archive whose name I shall determine on run...in this case, it was libmy.a
- Command is 
```
ar -rc archive_name.a *.o
# ar is the archive command that creates/ modifies or deletes an archive depending on the command option ie the parts after -
# -rc stand for 'replace member files' and 'create archive' respectively
# We then follow it up with the archive name we want to create then finish up with the files to add to the archive
```
### create_static_lib.sh
- This is more or less everything I did above here but in one shell script
	- The first line tells the program to use the bas terminal to run
	- The second line is similar to the compilation function above (Check All .o files section) and it simply makes the .o files
	- The third line is the command that basically takes all .o files and adds them to an archive we've name
	```
	#!/bin/bash
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
	ar -rc archive_name.a *.o
	```
