# About #
- Here we shall work with various functions and loops to solve some problems as below

## Mandatory Tasks ##
### 0-putchar.c ###
- Problem was to print the words '_putchar' while only using putchar()
- Solution was I opted to first create an array containing the word followed by an index counter initialized to 0
- I then used a for loop that checks while the index counter is less than 8, we print out the array's character at the index counter's position. (8 is the total number of characters inclusive of the string breaker usually denoted as \0)
- By doing so, we only used one putchar but looped it multiple times. Once the counter gets to 8, it would mean it would have one through ever character thus we exit the loop and print a break line (\n) followed by the return value. 