/*
5. Arrays and Strings
1. Array Sum and Average 
   o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.
*/
#include<iostream>

using namespace std;

int main(){

    int size,a[100],b[100],ans[100],sum=0; // declred the veriables

    cout<<"\nEnter the size of an array = "; // user enter the value 
    cin>>size; // stored the input value

    for (int i = 0; i < size; i++) 
    {
        cout<<"\nEnter the element of an array a["<<i<< "] = "; // user enter the diffrent elements in first array
        cin>>a[i]; // stored the elements
    }
    for (int  i = 0; i < size; i++)
    {
        cout<<"\nEnter the element of an array b["<<i<<"] = "; // user enter the diffrent elements in first array
        cin>>b[i];  // stored the elements
    }

    for (int i = 0; i < size; i++)
    {
        ans[i] = a[i] + b[i]; // addtion of two array
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<"\nThe array addtion  = "<<ans[i]; // printing statement of addtion 
    }
    for ( int i = 0; i < size; i++)
    {
        sum += ans[i];
    }
    cout<<"\nThe addtion of array = "<<sum; // print the addtion value
    
    cout<<"\nThe avrage of aaray = "<<(float)sum/(float)size; // print the avrage for array
    
    return 0;
}