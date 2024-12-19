/*
. Operator Demonstration
o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results.
o Objective: Reinforce understanding of different types of operators in C++.
*/
#include<iostream>
using namespace std;
int  main()
{
    int num1,num2; // declered the variables

    cout<<"\nEnter the num1 value = "; // user enter the value
    cin>>num1; // sotred the input value in num1 variable  
    cout<<"\nEnter the num2 value = "; // user enter the value
    cin>>num2; // sotred the input value in num2 variable

    cout<<"\n---------- used arithmetic opreator ----------";
    cout<<"\n";
    cout<<"\nThe addtion is two number = "<<num1+num2; // sum of two number
    cout<<"\nThe subraction is two number = "<<num1-num2; // subtraction of two number
    cout<<"\nThe maltiplication is two number = "<<num1*num2; // maltiplication of two number
    cout<<"\nThe division of two numbrer = "<<num1/num2; // division of two number 
    cout<<"\nThe remender of two number = "<<num1%num2; // remender of two number 
    
    cout<<"\n";
    cout<<"\n---------- used relational opreator ----------";
    cout<<"\n";
    if (num1==num2) // this condition is explain the two numbers is equal  
    {
        cout<<"\nBoth value is same.";
    }
    if (num1>num2) // the condition is explain the who is biggest number of two number
    {
        cout<<"\nNum1 is biggest for num2.";
    }
    if (num1<num2) // the conditiion is explain the who is biggest number of two number
    {
        cout<<"\nNum2 is biggest for num1.";
    }
    if (num1!=num2) // the condition is explain the first number is not equal the secound number
    {
        cout<<"\nNum1 is not equal for num2.";
    }
    cout<<"\n";
    int num3; // declered the third variable
    cout<<"\nEnter the num3 value = ";
    cin>>num3; // sotred the input value in num3 variable
    cout<<"\n";
    cout<<"\n---------- used logical opretor ----------";
    cout<<"\n";
    cout<<"\n-----Used for and (&&) opretor.-----";
    cout<<"\n";
    if (num1>num2 && num1>num3) // the condition is explain the and opreator is used to maltiple conditions added the main condition and the all condition is true so exicute the block
    {
        cout<<"\nNum1 is Greter than  num2 and num3.";
    }
    if(num2>num1 && num2>num3) // the condition is explain the and opreator is used to maltiple conditions added the main condition and the all condition is true so exicute the block
    {
        cout<<"\nNum2 is Greter than num1 and num3.";
    }
    if (num3>num1 && num3>num2)  // the condition is explain the and opreator is used to maltiple conditions added the main condition and the all condition is true so exicute the block
    {
        cout<<"\nNum3 is Greter than num1 and num2.";
    }

    cout<<"\n-----Used for or (||) opretor.-----";
    cout<<"\n";
    if (num1>num2 || num1>num3)  // the condition is explain the and opreator is used to maltiple conditions added the main condition and the first condition is true so exicute the block
    {
        cout<<"\nNum1 is Greter than num2 and num3.";
    }
    if(num2>num1 || num2>num3) // the condition is explain the and opreator is used to maltiple conditions added the main condition and the first condition is true so exicute the block
    {
        cout<<"\nNum2 is Greter than num1 and num3.";
    }
    if (num3>num1 || num3>num2) // the condition is explain the and opreator is used to maltiple conditions added the main condition and the first condition is true so exicute the block
    {
        cout<<"\nNum3 is Greter than num1 and num2.";
    }

    cout<<"\n";
    cout<<"\n---------- used bitwise opretor ----------";
    cout<<"\n";
    
    if ((num1>num2) | (num1>num3)) // the condition is explain the opreator is used to maltiple conditions added the main condition and the first condition is true so exicute the block
    {
        cout<<"\nnum1 is potentially biggest number."; 
    }
    if ((num2>num1) | (num2>num3)) // the condition is explain the and opreator is used to maltiple conditions added the main condition and the first condition is true so exicute the block
    {
        cout<<"\nnum2 is potentially biggest number.";
    }
    if ((num3>num1) | (num3>num2)) // the condition is explain the and opreator is used to maltiple conditions added the main condition and the first condition is true so exicute the block
    {
        cout<<"\nnum3 is potentially bigges number.";
    }
    cout<<"\n";
    if ((num1>num2) & (num1>num3)) // the condition is explain the and opreator is used to maltiple conditions added the main condition and the all condition is true so exicute the block
    {
        cout<<"\nnum1 is biggest number.";
    }
    if ((num2>num1) & (num2>num3)) // the condition is explain the and opreator is used to maltiple conditions added the main condition and the all condition is true so exicute the block
    {
        cout<<"\nnum2 is biggest number.";
    }
    if ((num3>num1) & (num3>num2)) // the condition is explain the and opreator is used to maltiple conditions added the main condition and the all condition is true so exicute the block
    {
        cout<<"\nnum3 is biggest number.";
    }
    return 0;
}