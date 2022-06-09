# About #
- This file contains a guide on the debugging steps I used as below

## main.h ##
- This file contains basic headers and function prototypes we use
- Headers are like stdio.h or string.h while a function prototype is basically a summarized form of a function that states its: return_type function_name(parameter(s)_and_type(s))
- I started it with an if statement that checks whether it exists and if not, it defines the main.h file

## 0-main.c ##
- Here we were given a sample file to copy as is and modify just one line that would confirm that 0 is zero.
- Since the positive_is_negative() function would be provided by the checker, all I had to do was make sure the value it was checking i.e i, was 0.
- It does say we adhere to betty syntax but note that the number of lines of conde should be 16...This means that blank lines should be left as is
- You can check the number of lines of code using wc -l file

## 1-main.c ##
- Here we were given a file with an infinite loop in it and were required to comment out the loop from its start to finish.
- We also had to maintain the line count of the original code file so no addition of spaces was done. Just adding comment tags in existing lines with code and blank
- Refer to the above to know how to check the number of lines of code