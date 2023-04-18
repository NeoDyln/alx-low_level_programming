# About
- A folder about recursions in C
- Think of recursions as a way to repeat a function x within itself until the answer is obtained
- It is importain to note that there has to be some kind of break condition otherwise you'll have an inifinite loop scenario

## Tasks
### 0: 0-puts_recursion.c
- Description
	- Write a function that prints a string, followed by a new line.
	- Prototype:
	```c
	void _puts_recursion(char *s);
	```

- Steps taken
	- Since whatever \*s contains is a string, we can obtain the first value of it using the array decay i.e \*s
	- Since strings have a '/0' as a terminator, this can be used as our exit condition such that when we encounter it, the recursion ends. 
	- Meanwhile if we haven't encountered it, we can print out each item as we increment the address since chars occupy 1 byte.
	```
	#include "main.h"
	/**
	 * _puts_recursion - prints a string
	 * @s: pointer block of memory to fill
	 * Return: void
	 */
	
	void _puts_recursion(char *s)
	{
		if (*s == '\0')
		{
			_putchar('\n');
			return;
		}
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	```

### 1: 1-print_rev_recursion.c
- Description:
	- Write a function that prints a string in reverse.

- Here, I thought of using the indexes but assumed that it would count the terminating byte.
	- I thus opted to make a recurring function that prints the character after the current one as long as it wasn't a terminator... Confusing right
	- Think of it like this, I have the letters a-e as a string and I want to print in descending order ie edcba
	- At the start, I'm at the letter a and the terminator is after the letter e. In this case I could have the function repeat itself with the (current+1)th character then follow up with printing the current character...
	- The function would thus do this until I get to the terminating character therefore I'd have something like
```
	reverserFunction(*pointString)
	{
	while (current != /0)
	{
		reverserFunction(current + 1)
		putchar(current)
	}
}
```
