/*
5. Looping in C
o Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).
*/
#include<stdio.h>
int main()
{
    int start,end,i;
    printf("\nEnter the starting number = ");
    scanf("%d",&start);
    printf("\nEnter the ending number = ");
    scanf("%d",&end);
    
    printf("\n----------used of for loop----------");
    for(i=start;i<=end;i++)
    {
        printf("\n%d",i);
    }
    printf("\n----------used of while loop----------");
    i=start;
    while (i<=end)
    {
        printf("\n%d",i);
        i++;
    }
    printf("\n----------used of do while loop----------");
    i=start;
    do
    {
        printf("\n%d",i);
        i++;
    } while (i<=end);
    
    
    return 0;
}