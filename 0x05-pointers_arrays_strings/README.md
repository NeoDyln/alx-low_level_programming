# About
- This directory contains code about C pointers, strings and arrays as we shall see below.

## Mandatory tasks
### main.h
- Here I shall define the various function prototypes in use

### pointers (A just to know info)
- Think of pointers as variables containing the memory address to another non-pointer variable

### 0-reset_to_98.c
- This function will update whatever value is present at its passed pointer to 98

### 1-swap.c
- This function updates whatever value is present at its first passed in pointer to read the value at it's second passed-in pointer and the vice versa for the second pointer to the first pointer.

### 2-strlen.c
- This function mimics the strlen function (You can 'man strlen' to know how it works) and simply returns the length of the char array passed without the \0 character. Remember any array usually has that \0 as a marker for the end of the array
- It somply loops through the characters counting until before \0

### 3-puts.c
- This function prints a string followed by a new line
- It makes use of the _putchar function