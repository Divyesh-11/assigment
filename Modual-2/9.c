/*
9. Pointers in C
o Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.
*/
#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;

    printf("\nValue of before modification = %d",a); 
    printf("\nAddress is before modification = %p",ptr);  

    *ptr = 25;

    printf("\nvalue of after modification = %d",a);
    printf("\nAddress is after modification = %p",ptr);

   return 0;
}