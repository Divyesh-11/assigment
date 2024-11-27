/*
7. Functions in C
o Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.
*/
#include<stdio.h>
int fact(int num) 
{
    int fact=1,i;
    for(i=2;i<=num;i++)
    {
        fact *= i;
    }
    return fact;

}

int main()
{
    int num,ans;
    printf("\nEnterw the value num = ");
    scanf("%d",&num);
    ans = fact(num);
    printf("\nfactorial %d is %d",num,ans);

    return 0;
}