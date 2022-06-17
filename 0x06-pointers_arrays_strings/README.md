# About
- This is a continuation if the arrays and pointers functions

## Mandatory Tasks
### main.h
- This file contais function prototypes

### 0-strcat.c
- This is a concantenation project that simply combines two strings
- I made use of the string library (string.h) as well as the strlen functions
- Those helped me find the length of an array of chars or in leymans terms, a string
- By default, the length of the string will include the null break (\0) since it starts counting from index 0
- As in if the length is 5, then the chars are actually 6 due to the addition of \0
- As a result, I started adding chars of src from the index (len of dest + loop counter)

### 1-strncat.c
- This is similar to the above with the exception that the for loop only stops concanteating at a particular point where its length is equal to the passed int
- Beyond there, \0 null tags are added

### 2-strncpy.c
- This function makes a copy of a string at another given destination by simply casting a loop which adds a char at index n from the prev string to the respective index in a new string.
- Like 1 above, it only does so upto a certain index n passed beyond which it passes in a default value

### 3-strcmp.c
- This function loops through each and every index in the two strings passed checking whether at index n, ASCII values of s1[n] matches or is different from that of s2[n]
- If different, the difference is returned in the form s1[n] - s2[n] and the function is broken, else if both strings are checked and they are equal both in length of the strings and chars used, a zero is returned and the function is broken

### 4-rev_array.c
- Here I first took the number of elements, subtracted 1 and checked if the result, when divided by 2, returns a remainder of 0
- If it returns 0, it means there is an equal number of elements excluding the \0 therefore I can be taking a copy of the element at index x, put it aside, substitute index x with index last - 1... to remove the \0 ... and then return the copied index x to index last - 1. I'll do this loop for (n - 1) / 2 since if there was a remainder after that division... which the remainder can only result to 1 in such a case...then it would mean that value would be at the dead center of the array so even when reversed, position is maintained

### 5-string_toupper.c
- Here I simply loop through each item in the array and for each item, I do a second loop to check if its char matches any lowercase ASCII value. if so, I add a number to increment it to its uppercase ASCII form 

### 6-cap_string.c


### 7-leet.c
- Here I had the letters to change saved in an array as well as the replacement values for each.
- I then looped through the passed string checking if the letter I'm to change exists in the string and if so, I change it with its respective replacement. I was lucky since the size of the replacement chars and the letters to replace were the same.

## Advanced Tasks

### 100-rot13.c
- This function does a substitution Cipher where a char is replaced by the letter 13 chars ahead of it. Notice how I kept an array for normal alphabets and another starting with n.
- The one starting with 'n' represents what 'a' would be if passed through the cipher.  
- I simply looped through the normal alphabet array to find the position of each letter in the string and for each, I edited the letter at that position to read what the substitution cipher array would read at that position

### 101-print_number.c
- This function simply first takes a number and checks whether its 0...if so, returns 0
- If less than 0, I print out a -ve sign then reassign the passed int as a positive value to the same fuction
- If greater than 0/ positive, I then check whether if divided by 10, the result is greater than 0...if it is, I pass the result of the division to the same function and it keeps doing so until the division reads 0
- Meanwhile, I also print out the remainder of a division by 10 at every turn the function gets to run

### 102-magic.c
- This one needs an in depth knowledge of how memory allocation for variables and arrays work in C. The code to add is simply *(p + 5)
- *p points to int n which being an int, occupies 4 memory slots. The followin variable is an array of ints therefore each int i it has 4 slots taken
- By adding a value greater than 4 but less than 8 to p, we are simply telling the *p to point to a slot at least 4 slots ahead of n...hence points to a[2]
