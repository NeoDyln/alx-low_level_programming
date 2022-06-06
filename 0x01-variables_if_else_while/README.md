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

### 5-print_numbers ###
- Here we use the same logic of a while loop we used in 2-print_alphabet.c with the exception that we are just printing increment results up to a point like so.
- As always, make sure your code is betty compliant

### 6-print_numberz.c ###
- Under normal functions like printf(), the answer here would have been a modification of 5 above
- Since we are using putchar, it only reads characters if character values are given, else it reads values as ASCII.
- In this case, int values are obviously non char values therefore putchar will read the i we're trying to output in its ASCII form
- To rectify this, we have to go to the ASCII table, find the value we want to output and modify our putchar() so that the value we want displayed has its ASCII form in the putchar parentheses
- 0 therefore has an ASCII form of 48 therefore since our first value of i is 0, we simply add 48 such that putchar reads putchar(48+i)

### 7-print_tebahpla.c ###
- Here we simply are asked to do what we did in 2-print_alphabet but from the last letter to the first.
- All I did was edited the start index and changed the increment to a decrement
- Remember we are still usig ASCII values hence the reason why I print from 97-103

### 8-print_base16.c ###
- Here we are asked to output the hexadecimal numbers that exist. i.e (0 -15) but in hexadecimal form
- 0-9 are shown as they are but from 10-15, we have to use letters hence why 48-58 is ASCII for numbers 0-9 while 97-103 is ascii for a-f

### 9-print_comb.c ###
- Here we are asked to output all possible combinations of single digit numbers...in short, all single numbers.
- Each number is separated by a comma and space whose ASCII values are 44 and 32 respectively
- We thus loop through the ASCII values of 0-9, printing the value together with a comma and space up until the second last value hence the if (i < 57) loop

## Advanced Tasks ##
### 100-print_comb3.c ###
- Here we are asked to print all possible combinations of two digit numbers such that each digit should be different from the other, should start from the lowest to highest number and should be separated by a space and comma
- We use three variables, one to reset the second value's start point, one to mark the value of the first digit and one for the actual second digit to print.
- We initialize the resetter and digit one to be 0 
- We first loop through 0 - 9 in digit 1. 
  - For every loop in digit1, we make digit 2 take the value of the resetter and start a new loop for digit 2.
    - In the loop for digit 2 from 0(48) - 9(57), we check first if digit 1 == digit 2
    - If equal, we skip that operation and increment the value of digit 2 by one.
    - If unequal, we print digit 1 followed by digit 2. 
    - Then we check again if digit 1 isn't 8 and digit 2 isnt 9...simply to say our current value shouldn't be 89 since it is out last value. If true, we add a comma and space. If it was 89, we simply don't addd a comma and space as it is the last point of the function.
  - At this point we've looped through 0-9 for digit 2 and digit 2 has incremented beyond 9 in ASCII (i.e to 58)
  - We thus increment the values of both digit 1 and the resetter for digit 2 and start over the process
- You will notice it will automatically exclude digits whose numbers match or their combinations have been used before

### 101-print_comb4.c ###
- This is more or less what I did in 100-prit_comb.c but with an extra loop.
- For understanding, the innermost loop has a few if loops as below
- if loop 1 checks for duplicate values whether { { The first digit is unequal to the second digit} and {the first digit is unequal to the third digit} and {second digit is less than third} and {first is less than second}}
- if loop 2 checks whether the last value has been reached and if not, adds a comma and space
