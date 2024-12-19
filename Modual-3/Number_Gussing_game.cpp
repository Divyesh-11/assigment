

/*
2. Number Guessing Game
o Write a C++ program that asks the user to guess a number between 1 and 100. The
program should provide hints if the guess is too high or too low. Use loops to allow
the user multiple attempts.
o Objective: Understand while loops and conditional logic.
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{

    srand(static_cast<unsigned int>(time(0))); 

    int rendom_number = rand() % 100 + 1; // this is a genrated a random number 

    int number;
    cout<<"\nWelcome to the Number Guessing Game!"; // printing the statement for the entering the game

    cout<<"\nRendom numbers = "<<rendom_number; // genreted for random number
    while (true) // the loop is exicute so condition is true 
    {
        cout<<"\nEnter the number = ";  // user enter the value
        cin>>number; // sotred the input value 

        if (number < rendom_number) // this condition is explain the user input the value is not matched of rendom number so this block is exicuted 
        {
            cout<<"\nThe number is low. try again!";
        }
        else if (number > rendom_number) // this condition is explain the user input the value is not matched of rendom number so this block is exicuted
        {
            cout<<"\nThe number is high.try again!";
        }else // this condition is explain the user input the value is matched of rendom number so this block is exicuted
        {
            cout<<"\nCongratulations! You guessed the correct number!";
            break;
        }
    }
    
    return 0;
}