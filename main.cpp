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
    cout << "Welcome to C++ World, " << name << endl;

    fflush;

    // Example for operations with datas inputed
    cout << "\nWrite first number: ";
    cin >> num1;

    fflush;

    cout << "\nWrite second number: ";
    cin >> num2;

    cout << "The sum is: " << (num1 + num2) << endl;
    cout << "The sub is: " << (num1 - num2) << endl;
    cout << "The product is: " << (num1 * num2) << endl;
    cout << "The division is: " << (num1 / num2) << endl;

    return 0;
}