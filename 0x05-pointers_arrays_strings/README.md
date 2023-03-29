# About
- This directory contains code about C pointers, strings and arrays as we shall see below.


## Pointers
- So pointers are a really nice way of manipulating values by use of their storage locations in memory
- A pointer is more or less a variable whose value is usually set to the memory location of another normal variable. For instance:

``` c
// Declaring the variable and pointer
int c;
int *pointer2c;

c = 5;
/* 
* Assume you had these 2 variables. The first is a normal int variable and the second is an int variable that references the location of another int variable. 
* We define the variable referencing the location of another variable as a pointer
* Pointers usually have a * before the variable_name during declaration
*/
```

### Unary Operator (&)

- As it is, the pointer has just been declared and is never used yet. 
- To use it, we make use of the '&' operator such that we append this infront of the variable whose address/location in memory we want
- Note that `*pointer2c` and `pointer2c` have different meanings when used outside declarations
- Appending the & to a variable results in obtaining the address of that variable. This way, we can assign a variable's address to a pointer like so


``` c
pointer2c = &c;
```

- This way the 'pointer2c' has a value of (address/memory_location of c)
	- ie, the value of 'pointer2c' is not 5, instead, it is the "location in memory where the value of c, which is 5, is currently"
- Notice how we didn't use `*pointer2c` ... we'll get to why we didn't later but just know assigning an address/ memory location to a pointer is done like so
- Now that the pointer has the address of the variable c as its value, we can use a concept called Dereferencing to get the value of c from the pointer

### Dereferencing a pointer
- Now that we have the pointer looking at the location of c in memory, it would make sense to assume we can somehow get the value of c since we have something referencing its storage point...and you're right, we can
- This is where the `*` in `*pointer2c` comes in.
- This is a way of the pointer saying now I'll go and fetch whatever value that's present at this location I saved and it's simply done like so

``` c
printf("Value dereferenced by pointer is: %d and value of c is %d\ since the address pointed to by the pointer is %p which happens to be the address of variable c which is %p\n", *pointer2c, c, pointer2c, &c);
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
	- All I simply did was get the string and use a while loop to count the number of iterations I'd do before getting to the '\\0' mark
	- I then passed the iteration count to the return statement
- This function mimics the strlen function (You can 'man strlen' to know how it works) and simply returns the length of the char array passed without the \0 character. Remember any array usually has that \0 as a marker for the end of the array
- It somply loops through the characters counting until before \0

``` c
int _strlen(char *s)
{
	int sizeStr;

	sizeStr = (sizeof(*s) * sizeof(s)) / sizeof(char);
	return (sizeStr);
}
```
### 3-puts.c
- This function prints a string followed by a new line
- It makes use of the _putchar function

### 4-print_rev
- Works by printing all string chars but from last to start. You'll have to first get the length of the string tho
