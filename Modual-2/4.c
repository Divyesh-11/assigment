/*
4. Control Flow Statements in C
o Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).
*/
#include<stdio.h>
int main()
{
    printf("\n---------even or odd---------");
    //take value for user.
    int num;
    printf("\nEnter a number to cheak even or odd = ");
    scanf("%d",&num);
    //printing user value.
    printf("\nYour enter is %d",num);
    //cheak to number is even or odd and print this value.
    if(num%2==0)
    {
        printf("\n%d is even number.",num);
    }
    else
    {
        printf("\n%d is odd number.",num);
    }

    printf("\n---------used to switch---------");

    int choise;
    printf("\nEnter a choise = ");
    scanf("%d",&choise);

    switch (choise)
    {
    case 1 :
            printf("\nJanuary");
    break;
    case 2 :
            printf("\nFebruary");
    break;
    case 3 :
            printf("\nMarch");
    break; 
    case 4 :
            printf("\nApril");
    break; 
    case 5 :
            printf("\nMey");
    break; 
    case 6 :
            printf("\nJune");
    break; 
    case 7 :
            printf("\nJuly");
    break; 
    case 8 :
            printf("\nAugust");
    break; 
    case 9 :
            printf("\nSeptember");
    break; 
    case 10 :
            printf("\nOctomber");
    break; 
    case 11 :
            printf("\nNovember");
    break; 
    case 12 :
            printf("\nDecember");
    break; 
    default:printf("Invaild input.");
        break;
    }
    return 0;
}
