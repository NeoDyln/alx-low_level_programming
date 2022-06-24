# About
- This is a directory about using int main(int argc, char *argv[]) as opposed to int main(void)
- The argc is an argument counter whereas the *argv is a pointer to an array of pointers whose size is argc
- In short, *argv[] is the same as **argv since when argv, an array, is passed as a parameter(*argv), it becomes the address of its first element...therefore if we again use the * on that address, it now returns a pointer to the array's memory location


### main.h
- This is a file containing all the prototypes of functions we are using

## Mandatory Tasks
### 0-whatsmyname.c
- This prints the function name followed by a new line

### 1-args.c
- To avoid the compile error, I casted the array to an unused attribute function as present in the stdlib library otherwise the gcc(Compile function) would return an error of unused argument
- Also argc considers the initialized function as an argument so in order to count it as zero, we have to use an if statement that subtracts it if there are other arguments else we print 0
