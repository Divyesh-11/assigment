/*
6. Loop Control Statements
o Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement
*/
#include<stdio.h>
int main()
{
    int num,i;
    printf("\nEnter the value = ");
    scanf("%d",&num);
    printf("----------printing only 1 to 5 number---------");
    for(i=1;i<=num;i++)
    {
        if(i%5==0)
        {
            break;
        }else{
        printf("\n%d",i);
        }
    }
    printf("\n----------printing skping number 3 useing coutinue---------");
    for ( i = 1; i <=num; i++)
    {
        if(i==3)
        {
            continue;
        }else{
            printf("\n%d",i);
        }
    }
    
    return 0;
}