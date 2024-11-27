/*
11. Structures in C
o Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them
*/
#include<stdio.h>

// declertion of structure.
struct student 
{
    char name[100];
    int roll_number;
    float marks;
};

int main()
{
    struct student s[100];   
    int size,i;
    printf("\nEnter the size of array = ");
    scanf("%d",&size);

    // scaning loop for student name/rollnumber/marks.
    for ( i = 0; i < size; i++)
    {
        printf("\nEnter the name of student = ");
        scanf("%s",&s[i].name);
        printf("\nEnter the roll number of student = ");
        scanf("%d",&s[i].roll_number);
        printf("\nEnter the marks of student = ");
        scanf("%f",&s[i].marks);
    }
    // printing loop for student name/rollnumber/marks.
    for ( i = 0; i < size; i++)
    {
        printf("\n\nStudent namr is %s",s[i].name);
        printf("\nstudent rollnumber is %d",s[i].roll_number);
        printf("\nStudent marks is %f",s[i].marks);
    }    
    return 0;
}
