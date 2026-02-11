/*
Try to use const as a variable name.
*/
#include<stdio.h>
void main()
{
    int const = 10;   // const is a keyword
    printf("%d", const);
}

/*
Error:
Compilation Error

Reason:
const is a keyword and cannot be used as a variable name.
*/
