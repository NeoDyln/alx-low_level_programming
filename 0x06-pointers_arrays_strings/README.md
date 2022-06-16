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
- this is similar to the above with the exception that the for loop only stops copying at a particular point where its length is equal to the passed int
- Beyond there, \0 null tags are added

### 2-strncpy.c
- This function makes a copy of a string at another given destination by simply casting a loop which adds a char from the prev string to the respective index in a  new string

###
