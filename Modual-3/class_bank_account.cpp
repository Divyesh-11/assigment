/*
2. Class for Bank Account
o Create a class BankAccount with data members like balance and member functions like deposit and withdraw. Implement encapsulation by keeping the data members private.
*/
#include <iostream>

using namespace std;
class BankAccount // create the class 
{
private:
    double acno; // declred data menber
    int balance; // declred data menber
    string name; // declred data menber

public:
    BankAccount() : balance(0) {};

    void create()
    {
        cout << "\nEnter your account number = "; // user enter the value 
        cin >> acno; // stored the input value 

        cout << "\nEnter the account holder name = "; // user enter the value 
        getline(cin, name); // stored the input value 

        cout << "\nAccount Created successfully!\n"; // printing satatemnt for account created successfull 
    }

    void show() // create a show function print the user details  
    {
        cout << "\n---------- Account Details ----------";
        cout << "\nAccount number = " << acno; // print the bank account number
        cout << "\nAccount holder name = " << name; // print the name of account holder 
        cout << "\nAccount balance = " << balance << endl; // print the courunt bank account balance 
    }

    void deposit() // create a deposit function for user enter the deposit value 
    {
        unsigned int amount;

        cout << "\nEnter the deposit amount = "; // user enter the value
        cin >> amount; // stored the input value 

        balance += amount; // enter dposite value and plus the old value
        cout << "New Account Balance = " << balance << endl; // print the account balance 
    }

    void withdraw() // create the withdraw function for user and used to withdraw o money 
    {
        unsigned int amount;

        cout << "\nEnter the withdraw amount = "; // user enter the value 
        cin >> amount; // stored the input value

        if (amount <= balance) // the condition explain for user enter the amount is samiler to balance or not
        {
            balance -= amount; // the withdraw value subtract th old value
            cout << "\nWithdrawal successful!\nNew balance = " << balance << endl; // printing statement of withdraw amount and subtact value
        }
        else
        {
            cout << "Insufficient balance! \n Current Balance: " << balance << endl; // printing statement of cuurent balnace of your account 
        }
    }
};
int main()
{
    BankAccount b1; // object creat for bankaccount class 

    char ch;  // declred the charector

    do
    {
        cout << "\n---------- Bank Menu ----------";
        cout << "\n1. Create Account";
        cout << "\n2. Show Details";
        cout << "\n3. Deposit Amount";
        cout << "\n4. Withdraw Amount";
        cout << "\nPress 'n' to exit the menu"<<endl;
        cout << "\n\nEnter your choice = ";
        cin >> ch;

        switch (ch) // used to switch case and calling difrent funcaion for entered the user.
        {
        case '1' : 
            b1.create(); // calling create function
        break;
        case '2' : 
            b1.show(); // calling show function
        break;
        case '3' : 
            b1.deposit(); // calling deposit function
        break;
        case '4' : 
            b1.withdraw(); // calling withdraw function
        break;
        case 'n' : 
            cout << "\nExiting the program. Goodbye!\n"; // printing statement 
        break;

        default:
                cout << "Invalid choice! Please try again.\n"; // printing statement 
        break;
        }
    } while (ch != 'n'); // cheak the the condtion and exicute the blaok
    
    return 0;
}