/*
6. Introduction to Object-Oriented Programming
1. Class for a Simple Calculator 
o Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. Create objects to use these functions.
*/
#include<iostream>

using namespace std;
class Claculator // create a class 
{
    private :
        double n1,n2; // declred the privte dadta members
    public :
            // Claculator(){}

            Claculator(double n1,double n2) // created cunstroctor 
            {
                this->n1 = n1; // used this pointer function and assign the value
                this->n2 = n2; // used this pointer function and assign the value
            }

            double addtion()  { return n1+n2; } // with return type function 
            double subtraction()  { return n1-n2; } // with return type function 
            double multiplication()  { return n1*n2; } // with return type function 
            double division()  { return n1/n2; } // with return type function 
};

int main(){

    int choice;
    double n1,n2,ans;
    char an = 'y';

     while (an == 'y')
    {

    cout<<"\nEnter the first number = "; // user enter the first number 
    cin>>n1; // stored the input value

    cout<<"\nEnter the secound number = "; // user enter the secound number 
    cin>>n2; // stored the input value 

    cout<<"\nSimple calculator"<<endl;
    cout<<"\n1. addtion ";
    cout<<"\n2. Subtraction";
    cout<<"\n3. multiplication";
    cout<<"\n4. dividion";
    cout<<"\n";
    cout<<"\nEnter the choise : "; // user enter the choice for calculator 
    cin>>choice; // user input the choice

    Claculator c1(n1,n2);
   
        switch (choice)
    {
    case 1 :
            ans = c1.addtion(); // callng the addtion function 
            cout<<"\nResult of addtion = "<<ans; // print the two number addtion
    break;
    case 2 :
            ans = c1.subtraction(); // calling the subtraction function 
            cout<<"\nResult of subtraction = "<<ans; // print the two number subtraction
    break;
    case 3 :
            ans = c1.multiplication(); //calling the multiplication function 
            cout<<"\nResult of multiplication = "<<ans; // print the two number multiplication
    break;
    case 4 :
        if (n2 != 0)
        {
            ans = c1.division(); // calling the division function 
            cout<<"\nResult of division = "<<ans; // print the two number division 
        }else{
            cout<<"\nDevided by 0 is not possible.";
        }
        break;
    
    default:
            cout<<"\nInvaild input.";
        break;
    }

    cout<<"\nDo you want to countinue [y/n] = "; // user enter the value
    cin>>an; // stored the input value

    }
    return 0;
}