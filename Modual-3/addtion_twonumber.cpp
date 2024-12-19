/*
4. Setting Up Development Environment
o Write a program that asks for two numbers and displays their sum. Ensure this is
done after setting up the IDE (like Dev C++ or CodeBlocks).
o Objective: Help students understand how to install, configure, and run programs in
an IDE.
*/
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,ans; // declered the variables

    cout<<"\nEnter the num1 value = "; // user enter the value
    cin>>num1; // store the value in this variable

    cout<<"\nenter the num2 value = "; // user enter the value
    cin>>num2; // store the value in this variable

    ans = num1+num2;

    cout<<"\nThe addtion of two number = "<<ans; // print the two number addition 
    return 0;
}