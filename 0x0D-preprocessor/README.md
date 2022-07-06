# About
- This folder mainly contains code about macros as well as compilation in C

## Macros Intro
- Macros can be thought of as simple identifiers which will be replaced by code fragments. They kind of appear like data objects/ variables in code. Usually they are used to give symbolic names to numeric constants
- To define them, we use the #define sequence with the below syntax
    #define macro_name token_sequence 
- The token sequence is also called the macro's body / expansion / replacement list
- Macro names are usually in upper-case
- If we wish to define values across more than one line from the macro declaration, we append a backslash to the preceeding line like so
    #define NUMBERS 1, \
      2, \
      3
- The program however will read it as one line like so
-   int x[] = { NUMBERS };
      ==> int x[] = { 1, 2, 3 };
- Be warned though that macros can have unnecessarily many line errors if used incorrectly. 
- There is also no restriction on what can go in a macro body provided it decomposes into valid preprocessing tokens
- Macros are used sequentially as defined therefore if you define a macro X and before it, X was used, then the original X is maintained up until the macro definition and afterward, any X is replaced by the macro's token_sequence.
- For example:
    foo = X;
    #define X 4
    bar = X;
- produces
    foo = X;
    bar = 4;
- Finally, a macro within a macro will not be expanded until both have been defined and the first macro is used:
- For example:
    #define TABLESIZE BUFSIZE
    #define BUFSIZE 1024
    TABLESIZE
      ==> BUFSIZE
      ==> 1024
- TABLESIZE is expanded first to produce BUFSIZE, then that macro is expanded to produce the final result, 1024.
- Notice that BUFSIZE was not defined when TABLESIZE was defined. The ‘#define’ for TABLESIZE uses exactly the expansion you specify—in this case, BUFSIZE—and does not check to see whether it too contains macro names. Only when you use TABLESIZE is the result of its expansion scanned for more macro names.
- If it were this for instance, the result would be different in that the TABLESIZE would always have a value of BUFSIZE and NOT 1024
    #define TABLESIZE BUFSIZE
    TABLESIZE
      ==> BUFSIZE
    #define BUFSIZE 1024

## Macro Arguments
- Macros also can take arguments and these args are defined in the macro declaration like so
- - #define macro_name(arg1, arg2)
- We can also define an operation to be done if arguments are present like so
- - #define min(X, Y)  ((X) < (Y) ? (X) : (Y))
- Values inside string literals (Quotes) won't always be replaced by their matching value


### main.h
- This file has all prototypes of the functions I'll use

### 0-object_like_macro.h
- This file includes code for a macro named size which we shall use in 0-main.c

### 1-pi.h
- This file includes code for a macro named PI which shall be used in 1-main.c

### 2-main.c
- This file uses a system macro called __FILE__ that has its token_sequence set to the file name so all you need to do is print it out

### 3-function_like_macro.h
- This file uses a macro function (Check above for macro function explanations) and it checks whether its passed number is less than 0. If true, it negates it else returns its origial value

### 4-sum.h
- This file uses a macro summation whic takes in the two passed numbers, and returns a summation
