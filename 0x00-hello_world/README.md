# About #
- This folder contains various scripts of the C programming language as defined below.
- Each of these is Betty linter compliant. To confirm if your file is betty compliant, you'll need the betty linter installed and afterwards, check using betty file_name
- gcc will compile using the aside options so include them while testing: -Wall -Werror -Wextra -pedantic -std=gnu89

## Mandatory Tasks ##

### 0-preprocessor ###
- Here we use the gcc-E command to compile the c file and (-o file_receiving) to output it to our desired location
- Syntax: gcc -E file_being_compiled -o results_output_file

### 1-Compiler ###
- Here we compile agai using the gcc command but we do not link (-o is the option that allows us to link ) .
- C compilers first preprocess, then compile, then assemble then link
- Syntax: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c file_being_compiled

### 2-assembler ###
- Here the script generates an assembly code file from the source c file as below and saves it as an assembly file
- Syntax: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -S file_being_compiled

### 3-name ###
- Here, we are compiling a file and making an executable out of it with a certain name
- Syntax: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c file_being_compiled -o compiled_resultts_file

### 4-puts.c ###
- Here we coded a C program that uses the puts function to output a line of text we want
- The syntax has to be betty compliant..It can be stressful to follow tho

### 5-printf.c ###
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

### 101-quote.c ###
- Here we simply made a c program that outputs a text with a quote mark in it. To output it, simply escape it with a back slash as seen in the code sample
- Again confirm it is betty compliant by using the betty c_file_name command. It will list the various errors betty found as well as the lines where present