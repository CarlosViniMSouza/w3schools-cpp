#include <iostream>

using namespace std;

int main()
{
    cout << "Hello Tutorial! \n";

    // Another way to insert a new line, is with the 'endl' manipulator:

    cout << "Testing command *endl*" << endl;
    cout << "All right!" << endl;

    int anyNum = 9;
    const float myMoney = 1402.5;
    string name;
    float num1, num2;

    // Example for constant data
    cout << "Your number is: " << anyNum << endl;
    cout << "My bank balance: " << myMoney << endl;

    // Examples for input data
    cout << "Your name, please: ";
    cin >> name;

    fflush;

    cout << "Welcome to C++ World, " << name << endl;

    // for(int i = 0; ... ;i++) -> check loop for print totaly the name.

    // Example for operations with datas inputed
    cout << "\nWrite first number: ";
    cin >> num1;

    fflush;

    cout << "\nWrite second number: ";
    cin >> num2;

    fflush;

    cout << "The sum is: " << (num1 + num2) << endl;
    cout << "The sub is: " << (num1 - num2) << endl;
    cout << "The product is: " << (num1 * num2) << endl;
    cout << "The division is: " << (num1 / num2) << endl;

    // Obs.: In C++, use 'double' instead 'float' !!

    /*
    float vs. double

    The precision of a floating point value indicates how many digits the value can have after the decimal point.

    -> The precision of float is only 6 or 7 decimal digits;
    -> While double variables have a precision of about 15 digits;

    Therefore it is safer to use double for most calculations.
    */

    /*
    Scientific Numbers

    -> A floating point number can also be a scientific number with an "e" to indicate the power of 10. Examples:
    */

    float numSci = 6.5E5;

    cout << "\nMy number Scientific: " << numSci << endl;

    return 0;
}