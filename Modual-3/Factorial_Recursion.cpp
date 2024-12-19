/*
2. Factorial Calculation Using Recursion
o Write a C++ program that calculates the factorial of a number using recursion.
*/
#include<iostream>

using namespace std;
int factorial(int num) // 
{
    if (num != 0) // this condtion is explain a num value not qeuel the 0
    {
       return num * factorial(num-1); // the function is calling the repet to repet and num value subtactedan maltiplied num value
    }
    else
    {
        return 1; // this return the value of 1 
    }
    

}
int main(){
    int num; // declered the variable

    cout<<"\nEnter the number for find a factorial = "; // user enter the value
    cin>>num; // stored the input value

    int ans = factorial(num); // calling factorial funcation and assigne the value in ans 

    cout<<"\nThe factorial of "<<num<<" is "<<ans; // printing statement for factorial
    return 0;
}