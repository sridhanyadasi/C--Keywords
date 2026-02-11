/*
Try to use break as a variable name.
*/
#include<stdio.h>
void main()
{
    int break = 10;   // break is a keyword
    printf("%d", break);
}

/*
Error:
Compilation Error

Reason:
break is a loop control keyword and cannot be used as a variable name.
*/
