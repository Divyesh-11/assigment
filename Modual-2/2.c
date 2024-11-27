/*
2. Basic Structure of a C Program
o Write a C program that includes variables, constants, and comments. Declare
and use different data types (int, char, float) and display their values.
*/
#include<stdio.h>
int main()
{
    // Declare different data types  
    int a = 10;
    float b = 11.50;
    char c = 'A';

    // printing statement for different data types 
    printf("A = %d\n",a);
    printf("B = %.2f\n",b);
    printf("C = %c\n",c);
    return 0;
}