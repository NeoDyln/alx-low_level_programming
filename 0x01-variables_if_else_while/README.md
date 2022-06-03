# About #
- This directory contains C programs about variables and how they are used in various loops like fi, if else and while.

## Mandatory tasks ##

### 0-positive_or_negative.c ###
- This program generates a random number using the rand function and for each number generated, we check whether it is positive, negative or 0 using if statements

### 1-last_digit.c ###
- This program seems to check if a number's last digit i.e if it were an array it would be array[len] or simply the number taking the ones place value. I tchecks if that number is greater than 5 or if (less than 6 and not 0) or if its a zero and output some text based on the result

### 2-print_alphabet.c ###
- Here we simply print out the alphabet characters in lowercase. There's a trick to it tho.
- We are only permitted to use putchar twice therefore one use case has to be a loop through the letters while the other is for the break line
- We make use of the while loop like so such that we loop through printing each letter without a break line
- Notice that since we are looping through a char type, we cannot use int types as indexex, we have to use size_t, the index marker for char types

### 3-print_alphabets.c ###
- Here we do the same as 2 above but we add an extra while loop as well as an extra condition for each while loop.
- The extra condition is a checker that will check whether lowercase was printed and if so, we switch to a putchar function that converts each letter into uppercase via the toupper() function and prints it.

### 4-print_alphabt.c ###
- Here its more or less the same as the code of 2-print_alphabet.c with the exception of letters e and q
- Remember that since the letters being printed decreased, we have to lower the size of the array by 2