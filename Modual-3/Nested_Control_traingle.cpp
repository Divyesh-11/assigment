/*
4. Nested Control Structures
o Write a program that prints a right-angled triangle using stars (*) with a nested loop.
o Objective: Learn nested control structures.
*/
#include<iostream>
using namespace std;
int main()
{
    int row,i,j,spac,k; // declered the variables 

    cout<<"\nEnter the row value = "; // user enter the value
    cin>>row; // stored the user value
    
    spac = row-1;
    for ( i = 1; i <= row; i++) // the loop exicute for traingle
    {
        for (j = spac; j >= i; j--) // the loop is created a spaces
        {
            cout<<" "; // this is the print the space
        }
        for (k = 1; k <= i; k++) // the loop is created a (* ) charctor
        {
            cout<<"* "; // this is the print the (* )
        }
        cout<<"\n"; // this is statement is printing a new line
    }
    
    return 0;
}