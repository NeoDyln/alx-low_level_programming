# About
- This folder contains code about singly linked lists
- Singly linked lists in C use structs as their data type

# Structures (Structs)
- These are data types that don't necessarily need contagious slots in memory
- Consider an array: They occupy a certain space in memory which has to be predefined after which all its items are filled in.
- With structs however, a struct has no predefined memory slot so variables in it can be scattered but a struct remembers each item's location ad size in memory.
- Assume you don't know a struct's name but you know its memory address, you can access that struct's items using the -> operand
- For instance, struct_pointer->data_in_struct = 6; will access the struct at the address to which struct_pointer points to ad afterwards, assign its data_in_struct a value of 6
- I hope that made some sense at least


