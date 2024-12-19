/*
2. Matrix Addition 
o Write a C++ program to perform matrix addition on two 2x2 matrices.
*/
#include<iostream>

using namespace std;

int main(){
    
    int a[100][100],b[100][100],ans[200][200],i,j,row,colm; // declered the variables

    cout<<"\nEnter the row number = "; // user enter the value
    cin>>row; // stored the input value 
 
    cout<<"\nEnter the colum number = "; // User enter the value 
    cin>>colm; // stored the input value

    for ( i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < colm; j++) // iner loop
        {
            cout<<"\nEnter the element of a["<<i<<"]["<<j<<"]= "; // user enter the first array element 
            cin>>a[i][j]; // stored the input element
        }
    }
    
    for ( i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < colm; j++) // iner loop
        {
            cout<<"\nEnter the element of b["<<i<<"]["<<j<<"] = "; // user enter the secound array element 
            cin>>b[i][j]; // stored the input element 
        }
    }
    
    for ( i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < colm; j++) // iner loop
        {
            ans[i][j] = a[i][j] + b[i][j]; // addtion of two array
        }
    }
    cout<<"\n the addtion of array = \n"; // printing the addtion of array mareix
    for ( i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < colm; j++) // iner loop
        {
            cout<<ans[i][j]<<" "; //  printing the addtion of array 
        }
        cout<<"\n"; // this statement of next line 
    }
    return 0;
}