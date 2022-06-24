# About
- This is a directory about using int main(int argc, char *argv[]) as opposed to int main(void)
- The argc is an argument counter whereas the *argv is a pointer to an array of pointers whose size is argc
- In short, *argv[] is the same as **argv since when argv, an array, is passed as a parameter(*argv), it becomes the address of its first element...therefore if we again use the * on that address, it now returns a pointer to the array's memory location


### main.h
- This is a file containing all the prototypes of functions we are using

## Mandatory Tasks
### 0-whatsmyname.c
- This prints its name, followed by a new line
