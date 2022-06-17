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
