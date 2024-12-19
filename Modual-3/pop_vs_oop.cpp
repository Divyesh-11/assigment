/*
3. POP vs. OOP Comparison Program
o Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.
*/
#include<stdio.h> // this is a c language included header file
#include<iostream> // this is a c++ language included header file
using namespace std;
int main()
{
    printf("\n----------pop language area of rectangle----------"); // this is a c language proggram
    printf("\n");
    int area,length,width; // declered the variables

    printf("\nEnter the length = "); // user enter the value
    scanf("%d",&length); // scan the input value
    printf("\nEnter the width = "); // user enter the value
    scanf("%d",&width); // scan the input value

    area = length * width;

    printf("\nThe area of rectangle is = %d",area); // print the area of rectangle


    cout<<"\n----------OOP language area of rectangle----------"; // this is a c++ language proggram 
    cout<<"\n";
    cout<<"\nEnter the length = "; // user enter the value
    cin>>length; // this is a store the input value 

    cout<<"\nEnter the width = "; // user enter the value
    cin>>width; // this is a store the input value

    area = length * width;

    cout<<"\nThe area of rectangle is = "<<area; // print the area of rectangle 

    return 0;
}