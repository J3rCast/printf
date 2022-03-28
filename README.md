## This is my own printf function

# _prinf.c

This file contains a function that choose the correct function to print based on the adjacent character of '%' character
* %c - allows you to print a sinlge character
* %s - allows you to print an entire string
* %% - allows to print a single '%' character
* %i - allows you to print an integer
* %d - allows you to print an decimal in base 10 integer
#Example of its use whit %c
´´´
char a = 'b';

printf("%c is a character", a);
´´´
#Output
´´´
b is a character
´´´
