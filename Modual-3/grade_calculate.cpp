/*
1. Grade Calculator
o Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else conditions.
o Objective: Practice conditional statements (if-else).
*/
#include<iostream>
using namespace std;
int main()
{
    double marks1,marks2,marks3; // declered a variables

    cout<<"\nEnter the first subject number = "; // user enter the value
    cin>>marks1; // stored the input value 
    cout<<"\nEnter the secound subject number = "; // user enter the value
    cin>>marks2; // stored the input value
    cout<<"\nEnter the third subject number = "; // user enter the value
    cin>>marks3; //storedthe input value

    cout<<"\nThe first subject marks is = "<<marks1; // printing the subject-1 marks 
    cout<<"\nThe secound subject marks is = "<<marks2; // printing the subject-2 marks
    cout<<"\nThe third subject marks is = "<<marks3; // printing the subject-3 marks

    double ans = marks1+marks2+marks3;
    double percantage = ans/3;
    
    cout<<"\nThe addition is all subject number = "<<ans; // printing the all subject addtion
    cout<<"\nThe percantage is = "<<percantage; // printing the all subject percantage 

    if (percantage > 50 && percantage <=75) // the condition for printing grade-C
    {
        cout<<"\nGrade - C";
    }
    else if(percantage > 76 && percantage <= 90) // the condition for printing grade-B
    {
        cout<<"\nGrade - B";
    }
    else if (percantage > 90 && percantage <= 100) // the condition for printing grade-A
    {
        cout<<"\nGrade - A";
    }
    
    return 0;
}