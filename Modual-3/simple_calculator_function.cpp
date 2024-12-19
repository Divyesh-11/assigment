/*4. Functions and Scope
1. Simple Calculator Using Functions o Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). The main function should call these based on user input.
*/
#include<iostream>

using namespace std;
int input_value(int &num1,int &num2); // declered the function for used of user take value 
void addtion(); // declered the function of addtion 
void subtraction(); // declered the function of subtraction 
void multiplication(); // declered the function multiplication
void division(); // declered the function division
int main(){

    int choice;
    do
    {
        cout<<"\nSimple calculator";
        cout<<"\n";
        cout<<"\n1. Addtion";
        cout<<"\n2. Subtraction";
        cout<<"\n3. Multiplication";
        cout<<"\n4. Division";
        cout<<"\n5. Exit";
        cout<<"\n";
        cout<<"\nEnter the coise : "; // take choice for user
        cin>>choice; // stored the take value
        
        switch (choice) // used for switch case for take user choice
        {
        case 1:
            addtion(); // calling the addtion funcation
        break;
        case 2:
            subtraction(); // calling the subtraction funcation 
        break;
        case 3:
            multiplication(); // calling the multiplication function
        break;
        case 4:
            division(); // calling the division function
        break;
        case 5:
            cout <<"\nExiting the program."; // this is exit statement 
        break;
        
        default:
            cout<<"\nInvail choise ! Plaese try again"; // user input the invaild number to exicute this statement
            break;
        }
    } while (choice != 5);
    

    addtion();
    subtraction();
    return 0;
}
int input_value(int &num1,int &num2){

    cout<<"\nEnter the first value = "; // user enter the value
    cin>>num1; //stored the input value

    cout<<"\nEnter the secound value = "; // user enter the value
    cin>>num2; // stored the input value
}
void addtion()
{
    int num1,num2; // declered the variable 
    input_value( num1, num2); // This function used of user take value 
    cout<<"\nThe addtion is two number = "<<(num1+num2); // the used for printing statement and logic for addtion

}
void subtraction()
{
    int num1,num2; // declered the variable 
    input_value(num1,num2); // This function used of user take value 
    cout<<"\nThe subtraction is two number = "<<(num1-num2); // the used for printing statement and logic for subtraction
}
void multiplication()
{
    int num1,num2; // declered the variable 
    input_value(num1,num2); // This function used of user take value 
    cout<<"\nThe multiplication is two number = "<<(num1*num2); // the used for printing statement and logic for multiplication
}
void division()
{
    int num1,num2; // declered the variable 
    input_value(num1, num2); // This function used of user take value 
    cout<<"\nThe division is two number = "<<(num1/num2); // the used for printing statement and logic for division
}