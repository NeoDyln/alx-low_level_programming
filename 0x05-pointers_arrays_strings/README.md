# About
- This directory contains code about C pointers, strings and arrays as we shall see below.


## Pointers
- So pointers are a really nice way of manipulating values by use of their storage locations in memory
- A pointer is more or less a variable whose value is usually set to the memory location of another normal variable. For instance:
``` c
int c;
int *pointer2c;

// Assume you had these 2 variables. The first is a normal int variable and the second is an int variable that references the location of an int
```
## Mandatory tasks
### main.h
- Here I shall define the various function prototypes in use

### pointers (A just to know info)
- Think of pointers as variables containing the memory address to another non-pointer variable

### 0-reset_to_98.c
- Description: Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
- Here is what I did
	- Created a function with a pointer as one of the parameters
	- Within the function, used dereferencing to change the value it points to to read 98
- This function will update whatever value is present at its passed pointer to 98
``` c
void reset_to_98(int *n)
{
	*n = 98;
}
```

### 1-swap.c
- Description: Write a function that swaps the values of two integers.
	- Prototype to use: `void swap_int(int *a, int *b);`
- Here is what I did
	- I took the value at location pointed to by a and saved it in a temporary int variable via dereferencing
	- I then took the value at a and set it to be whatever b had
	- I then set the value of b to be whatever the temporary variable had
- This function updates whatever value is present at its first passed in pointer to read the value at it's second passed-in pointer and the vice versa for the second pointer to the first pointer.
``` c
void swap_int(int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}
```


### 2-strlen.c
- Description: Write a function that returns the length of a string
	-  Prototype to use: `int _strlen(char *s);`
	- FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more

- Here is what I did
	- Strlen uses sizes to compare and obtain the length of the string
	- All I simply did was use the sizeof operand to get the size of the whole string and divided it by the size of 1 char value
	- I then passed the value I obtained into an int
- This function mimics the strlen function (You can 'man strlen' to know how it works) and simply returns the length of the char array passed without the \0 character. Remember any array usually has that \0 as a marker for the end of the array
- It somply loops through the characters counting until before \0

### 3-puts.c
- This function prints a string followed by a new line
- It makes use of the _putchar function

### 4-print_rev
- Works by printing all string chars but from last to start. You'll have to first get the length of the string tho
