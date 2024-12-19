/*
3. Multiplication Table
o Write a C++ program to display the multiplication table of a given number using a
for loop.
o Objective: Practice using loops.
*/
#include<iostream>
using namespace std;
int main()
{
    int num,i; // declered the variables

    cout<<"\nEnter the num value = "; // user enter the value
    cin>>num; // stored the input value  

    for ( i = 1; i <= 10; i++) // this loop is exicute for not printing the loop value
    {
        cout<<num<<"x"<<i<<"="<<num*i; // this is a logic of table
        cout<<"\n"; // printing statement the table
    }
    
    return 0;
}