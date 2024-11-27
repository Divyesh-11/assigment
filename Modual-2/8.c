/*
8. Arrays in C
o Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.
*/
#include<stdio.h>
int main()
{
    // 1[] dimenstion array program. 
    printf("\n----------1[] array----------");
    int a1[5]={1,5,8,7,6};

    printf("\n%d",a1[0]);
    printf("\n%d",a1[1]);
    printf("\n%d",a1[4]);
    printf("\n%d",a1[3]);
    printf("\n%d",a1[2]);

    // 2[][] dimenstion array program. 
    printf("\n----------2[][] array sum----------");

    int a[100][100],b[100][100],row,coln,i,j,ans[100][100];

    printf("\nEnter the row count = ");//Iput row number for user.
    scanf("%d",&row);
    printf("\nEnter the coln count = ");//Input colum number for user.
    scanf("%d",&coln);

    // scaning 2d array of A.    
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < coln; j++)
        {
            printf("\nEnter of an array element is a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        } 
    }
    
    // scaning 2d array of B.
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < coln; j++)
        {
            printf("\nEnter of an array is b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    // printing 2d array of A.
    printf("\n2D array is A = \n");
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < coln; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    // printing 2d array of B.
    printf("\n2D array is B = \n");
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < coln; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    // addtion of A and B.
    printf("\nThe addtion of = \n");
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < coln; j++)
        {
            int sum=0;
            sum=a[i][j]+b[i][j];
            printf("%d ",sum);
        }
        printf("\n");
    }
       return 0;
}