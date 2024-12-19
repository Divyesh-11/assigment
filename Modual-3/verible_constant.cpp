/*
1. Variables and Constants
o Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them.
*/
#include<iostream>
using namespace std;
int main()
{
    const int num1 = 50; // declered a constant integer value is not chage the value
    const long num2 = 125000; // declered a constant long integer value is not chage the value
    const char ch = 'A'; // declered a constant charchtor value is not chage the value
    const float a = 45.55; // declered a constant floating value is not chage the value
    const double b = 54.52552456; // declered a constant double value is not chage the value
    const bool b1 = true; // declered a boolean is not chage the value
    const bool b2 = false; // declered a boolean is not chage the value

    cout <<"\nThe value of num1 = "<<num1; // print the constant integer value 
    cout<<"\nThe value of num2 = "<<num2; // print the constant long integer value 
    cout<<"\nThe charactor value of ch = "<<ch; // print the constant charactor 
    cout<<"\nThe float value is = "<<a; // print the floating value
    cout<<"\nThe double value is = "<<b; // print the double value 
    cout<<"\nThe bool1 value is = "<<b1; // print the true boolean  
    cout<<"\nThe bool2 value is = "<<b2; // print the false boolean
    return 0;
}