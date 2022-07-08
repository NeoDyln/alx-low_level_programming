# About
- This repository contais code about use of variadic functions

## Notes
### Constants
- These are values that do not change at any point in the function once declared

#### Declaration
- Simply append the const key word before a variable like so
-    const int x = 5
- Trying to change the value of x would result in an error since...well, x is a constant unmutable value

### Variadic functions
- These are basically functions that can take a variable number of arguments

#### Defining a variadic function
- Their syntax is like so
-   Function_name(var_argumets_number, ...)
- The ellipsis (...) is a marker that indicates that this function takes a variable number of arguments
- var_argumets_number indicates the number of arguments being taken

#### Using the variadic function
- Variadic functions are implemented using the stdarg.h library so be sure to include it as a header file
- In addition we also have to define 4 things: the list of variable arguments, a start and end point as well as the bit that will take in each variable_argument
- Remember we know how many arguments are being passed since its one of the function parameters being passed
- Therefore, syntax is like so
-   {
-        /* Inside the function definition */
-        /* Defining the list variable of type va_list that will hold the variable arguments

-        va_list list_name;

-	/* Defining the start point using the list name and the expected number of arguments */
-	va_start(list_name, var_argumets_number);

-        /* Usage of each variable...Preferably use in a loop that counts according to var_argumets_number  */
-        loop
-        {
-           /* To define this, declare both the list as well as the data type of each argument  */
-           /* You can also print it out if you wish or assign to a local variable */
-           /* For this case, I printed out each value assuming all were integers */
-           printf("%d\n", va_arg(list_name, int))
-           /* NOTE that va_arg is of a pointer type so it returns a pointer to a value if assigned to a variable, otherwise, it returns the value itself */
-           /* As a result, any assignments of it to a variable have to be of type pointer */
-        }

-        /* Ending the variable list */
-        va_end()
-    }

## Tasks
### variadic_functions.h
- This will contain all prototypes of the functions we'll use as well as their header files
- Prototypes of functions are basically pre-declarations of an existing function in the folder

### 0-sum_them_all.c
- A function that sums n number of arguments passed
- Be sure to declare the sum variable as a non-unsigned variable since some of the numbers could be negatives

### 1-print_numbers.c
- A function that prints n numbers according to arguments_count passed. It also adds a value between numbers printed

### 2-print_strings.c
- A function that prints n strings putting (nil) where a string is empty and it adds a value between strings
- Read the notes above to understand why I opted for a pointer type instead of printing out directly
- In addition to that explanation, I was also unsure of the size of the strings therefore its safer to just reference their location using a pointer

### 3-print_all.c
- A function that literally prints any data type
