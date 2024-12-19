/*
2. Type Conversion
Write a C++ program that performs both implicit and explicit type conversions and prints the results.*/
#include<iostream>

using namespace std;

int main(){
    int num1,num2,ans; // declered the variables 

    cout<<"\nEnter the num1 value = "; // user enter the value
    cin>>num1; // stored the num1 value

    cout<<"\nEnter the num2 value = "; // user enter the value
    cin>>num2; // stored the num2 value 

    ans = num1/num2;

    cout<<"\nThe division a two number used for emplisit = "<<ans; // print the emplisit value for genreted by computer

    cout<<"\nThe dividion a two number used for explisit = "<<(float)num1/(float)num2; // print the explisit value for user genrated value type
    return 0;
}