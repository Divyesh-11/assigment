/*3. Operators in C
o Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.
*/
#include<stdio.h>
int main()
{
    int num1,num2;
    
    printf("\nEnter the first number = ");
    scanf("%d",&num1);
    printf("\nEnter the second number = ");
    scanf("%d",&num2);

    //used arithmetic opretor and print the value.
    printf("\n---------arithmetic opreter---------");
    printf("\ntow number addtion = %d",num1+num2);
    printf("\ntow number subtraction = %d",num1-num2);
    printf("\ntow number divison = %.2f",(float)num1/(float)num2);
    printf("\nTow number remeninder = %d",num1%num2);

    //used relational opretor and print the value.
    printf("\n---------relational opreter---------");
    if (num1==num2)
    {
        printf("\nboth value are same.");
    }
    if (num1>num2)
    {
        printf("\nnum1 is biggest for num2.");
    }
    if (num1<num2)
    {
        printf("\nnum2 is biggest for num1.");
    }
    if (num1!=num2)
    {
        printf("\nnum1 is not same for num2.");
    }

    // used for logical opreter and print the value.
    printf("\n---------logical opreter---------");
    int num3;
    printf("\nEnter the num3 value = ");
    scanf("%d",&num3);
    if (num1>num2 && num1>num3)
    {
        printf("\nnum1 is biggest number for num2 and num3.");
    }
    if (num2>num1 && num2>num3)
    {
        printf("\nnum2 is biggest number for num1 and num3.");
    }
    if (num3>num1 && num3>num1)
    {
        printf("\nnum3 is biggest number for num1 and num2.");
    }
        return 0;
}