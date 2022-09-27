# About #
- This folder contains various scripts of the C programming language as defined below.
- Each of these is Betty linter compliant. To confirm if your file is betty compliant, you'll need the betty linter installed and afterwards, check using betty file_name
- gcc will compile using the aside options so include them while testing: -Wall -Werror -Wextra -pedantic -std=gnu89

## The SheBang
- Notice how every file's fist line is the below code line 
``` shell
#!\bin\bash 
```
- This simply means that the code below it is being executed using the program in the directory next to the '#!' symbols
- In this case, the program is the bash terminal and it is in a folder path of /bin/bash

## Some Notes 
### The C Compiler
- This is a set of modules ( inclusive of a preprocessor, compiler, assembler, and linker ) that convert out source code into an executable C file. 
- Each of the modules is independent just like how Microsoft Office has independent modules like Word, Excel, etc...Therefore each module has its own functions as we shall see later.
- Generally, however, the whole compiler does the below process using the modules in the order below
    - Preprocessor - Preprocesses source code into an intermediate temporary file
    - Compiler - Compiles file x into assembly code, usually with .s extensions per compiled file
    - Assembler - Converts assembly code into machine-readable/ binary code, usually with .o extensions
    - Linker - Links any libraries we may have included and creates the executable
- Remember, C programs are compiled using a function called gcc
#### gcc
- The gcc function has the options that are as below
    - gcc
        - This command on its own, does the whole compilation process but saves the executable to a file named a.out, the object code to source.o, the assembly code to source.s and if preprocessed alone, returns to standard output
        ``` shell
        gcc <file.c>
        # By default, outputs to a.out
        ```
    - gcc -E
        - This command only preprocesses the file and returns it to standard output if no compiler actions are done
        ``` shell
        gcc -E <file.c>
        ```
    - gcc -S
        - This command both preprocesses and compiles files but just that. The resulting files are assembly files with the .s extensions
        ``` shell
        gcc -S <file(s).c>
        ```
    - gcc -c
        - This command preprocesses, compiles and assembles the code but does not link, therefore output is in the form of .o files which are basically binary code
        ``` shell
        gcc -c <file(s).c>
        ```
    - gcc -o
        - This command does everything that gcc -c does, only that it also combines all files passed into one executable file, in addition to linking any libraries listed
        ``` shell
        gcc -c *.c -o <one_executable_file>
        # *.c means All .c files else specify each .c file wished to be linked separated by a space
        ```
### The Preprocessor
- The preprocessor has a few roles including:
    - Deletion of comments
    - Copying in code from header files like stdio.h
    - Replaces macro names with code
- Once done, the resulting code is saved as an intermediate file and passed to the compiler
### The Compiler
- The compiler takes the intermediate file above and converts it to assembly code which is basically English instructions of the whole source code. The instructions are an international standard I assume and if not, one defines the assembler to be used.
- Usually, these are in the .s  files
### The Assembler
- Computers can only read binary therefore the assembler's work is to convert the assembly code into binary/ object code, usually with .o extensions.
### The linker
- The linker generally has 2 uses as below:
    - Assume you're working on a team project...there will be multiple C files therefore you'd want one common executable file to run all those files. Well the linker creates just that as long as we define the name of the file, els it creates it to a.out
    - Assume we are using libraries, linker links the libraries to our object code files and basically zips them up into one executable file. The linking type is dependent on the kind of linking being done ie: static or dynamic. Dynamic linking is done automatically by the machine but for static, check out my C project on the same using this link to my github

## Mandatory Tasks ##

### 0-preprocessor ###
- Here we use the gcc-E command to compile the c file and (-o file_receiving) to output it to our desired location
- Syntax: 
    ``` Shell
    gcc -E file_being_compiled.c -o results_output_file
    ```

### 1-Compiler ###
- Here we compile again using the gcc command but we do not link (-o is the option that allows us to link ) .
- C compilers first preprocess, then compile, then assemble then link
- Syntax: 
    ``` shell
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c file_being_compiled
    ```
### 2-assembler ###
- Here the script generates an assembly code file from the source c file as below and saves it as an assembly file
- Syntax: 
    ``` shell
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -S file_being_compiled
    ```
### 3-name ###
- Here, we are compiling a file and making an executable out of it with a certain name
- Syntax: 
    ``` shell
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c file_being_compiled -o compiled_resultts_file
    ```

### 4-puts.c ###
    #### Instructions
    - Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
        - Use the function puts
        - You are not allowed to use printf
        - Your program should end with the value 0
- Here we coded a C program that uses the puts function to output a line of text we want
- The syntax has to be betty compliant..It can be stressful to follow though

### 5-printf.c ###
    #### Instructions
    - Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
        - Use the function printf
        - You are not allowed to use the function puts
        - Your program should return 0
        - Your program should compile without warning when using the -Wall gcc option
- Here we use the printf function to display text. Syntax has to be betty compliant

### 6-size.c ###
- Here we print out the various data types and their sizes. Be sure to actually test whether it compiles as a 32 bit and 64 bit system
- You'll need to install the libc6-dev-i3866 package via sudo apt then later test using gcc file.c -m32 -o size32 2> /tmp/32 for 32 bit. For the 64 bit, its the same as the 32 bit test but replace 32s with 64s
- To print the sizes of each data type, make use of the sizeof() function

## Advanced Tasks ##

### 100-intel ###
- Here, we basically make an assembly file(Refer to 2-assembly) but we add a -masm=intel tag
- Syntax: gcc -S -masm-intel file.c
- The resulting file will be a .s file with the same starter name as file.c, simply put it willl be file.s
- Don't forget to make this into an executable

### 101-quote.c ###
- Here we simply made a c program that outputs a text with a quote mark in it. To output it, simply escape it with a back slash as seen in the code sample
- Again confirm it is betty compliant by using the betty c_file_name command. It will list the various errors betty found as well as the lines where present
