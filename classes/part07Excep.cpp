#include <iostream>

using namespace std;

int main() {
    /*
        C++ try and catch

        Exception handling in C++ consist of three keywords: "try", "throw" and "catch":

        1 - The "try" statement allows you to define a block of code to be tested for errors while it is being executed.

        2 - The "throw" keyword throws an exception when a problem is detected, which lets us create a custom error.

        3 - The "catch" statement allows you to define a block of code to be executed, if an error occurs in the try block.

        Example of Structure Try Exception:
    */

    /*
    try {
      // Block of code to try
        throw exception; // Throw an exception when a problem arise
    }
    catch () {
        // Block of code to handle errors
    }
    */

    /*
        If you do not know the throw type used in the try block, you can use the "three dots" syntax (...) inside the catch block, which will handle any type of exception.
    */

    try {
        int age;
        cout << "\nYour age, please: ";
        cin >> age;

        if(age >= 16) {
            cout << "\nYou can vote!";
        } else {
            throw age;
        }
    }
    catch(int minimumAge) {
        cout << "\nYou cant vote! Age minimum necessary >= 18";
    }

    return 0;
}