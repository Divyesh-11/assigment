/*
3. String Palindrome Check
o Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards).
*/
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str1,str2; // declred the veriables
    int i,size; // declred the veriables
    char temp; // declred the veriables
    cout<<"\nEnter the string-1 value : "; // user enter the string value 
    cin>>str1; // stored the string value 

    str2 = str1; // string - 1 value assign to string - 2

    size = str1.length(); // string langth find and assign the size veriale

    for(int i=0; i<size/2; i++)
    {
        temp = str1[i]; // swping the strings
        str1[i] = str1[size-1-i]; // swping the strings
        str1[size-1-i] = temp; // swping the strings
    }

    cout<<"\nOriginal string is = "<<str2<<endl; // print the orignal string value 
    cout<<"\nRevers string is = "<<str1<<endl; // print the revers string value

    if (str1 == str2) // condition cheaked to both string is same or not 
    {
        cout<<"\nThe string value is pallindrome."<<endl; // printing satament for pallindrome
    }
    else
    {
        cout<<"\nThe string value is not pallindrome"<<endl; // printing satament for not pallindrome
    }
    return 0;
}