/*
3. Inheritance Example 
o Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. Demonstrate reusability through inheritance.
o Objective: Learn the concept of inheritance.
*/
#include<iostream>

using namespace std;
class person // base class
{
    private :
        string name; // declered data member.
        int age; // declred data member.
    public : 
        void parson(string name,int age) // create a funcation of with return type
        {
            this->name = name; // used this pointer and assign variable 
            this->age = age; // used this pointer and assign variable 
        }
        void diplay() // create a display funcation and print the output
        {
            cout<<"\nThe name of person = "<<name; // print the name of person
            cout<<"\nThe age of person = "<<age; // print the age of person
        }
};
class student /* drived class */ : public person // inhereted the base class 
{

};
class Teacher /* drived class */ : public person // inhereted the base class
{

};
int main(){

        person p1; // create person class object 
        p1.parson("divyesh",22); // passed the values 
        p1.diplay(); // calling the display function 
        student s1; // create student class object 
        s1.parson("rohit",19); // passed the values
        s1.diplay(); // calling the dipaly function
        Teacher t1; // create student class object 
        t1.parson("Jatin",15); // passed the values
        t1.diplay(); // calling the dipaly function
    return 0;
}