/*
3. Variable Scope 
o Write a program that demonstrates the difference between local and global variables in C++. Use functions to show scope.
*/
#include <iostream>
using namespace std;

int globalVar = 10; // Global variable

void demonstrateLocalScope() // Function to demonstrate local variable scope
{
    int localVar = 20; // Local variable
    cout << "Inside demonstrateLocalScope function:\n";
    cout << "Global variable: " << globalVar << endl; // Accessible
    cout << "Local variable: " << localVar << endl;   // Accessible
}

void modifyGlobalVariable()  // Function to demonstrate global variable modification
{
    globalVar += 5; // Modify global variable
    cout << "Inside modifyGlobalVariable function:\n";
    cout << "Global variable after modification: " << globalVar << endl;
}

int main() {
    int localVar = 50; // Local variable in main function
    cout << "Inside main function:\n";
    cout << "Global variable: " << globalVar << endl; // Accessible
    cout << "Local variable: " << localVar << endl;   // Accessible

    
    demonstrateLocalScope(); // Call function to demonstrate local scope

    modifyGlobalVariable(); // Call function to modify global variable

    cout << "Back in main function:\n"; 
    cout << "Global variable after modification: " << globalVar << endl;  // Show global variable value after modification

    return 0;
}