# About #
- Here we have a continuatio of some nested functions and applications as follows

## main.h ##
- This file contains prototype function declarations of the various functions we use.
- They are in the form: return_type func_name(args)

## Mandatory tasks
### 0-isupper.c ###
- This file contains a program that checks whether a letter is in uppercase by comparing it against the ASCII values of uppercase alphabets.
- If a match is found, the value returned is 1 else by default, it returns 0

### 1-isdigit.c ###
- This file, like the isalpha file above, will compare the provided value to its counterpart ASCII values of 0-9
- If a match is found, a value 1 is returned else by default, 0 is returned

### 2-mul.c ###
- This function should return the product of two integers passed
- Returns the product as its return value

### 3-print_numbers.c ###
- This function prints all numbers 0-9 through a for loop and the _putchar function as defined in main.h
- The second and final _putchar wil output a breakline

### 4-print_most_numbers.c ###
- This function does the same as the above, with the exception that it excludes 2 and 4
- Remember to add its prototype in main.h

### 5-more_numbers.c ###
- Prints the numbers 0-14 ten times each time in a new line
- Basically I set the function to always print a copy of the loop value with the exception that when it gets to greater than 9, a forced 1 will be printed followed by the (copy - 10) 