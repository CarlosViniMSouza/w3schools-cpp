#include <iostream>
#include <cmath>

using namespace std;

// creating a calculate function:
void funcToCalc(float num1, float num2)
{
    cout << "\nThe sum: " << num1 + num2 << endl;
    cout << "The sub: " << num1 - num2 << endl;
    cout << "The product: " << num1 * num2 << endl;
    cout << "The division: " << num1 / num2 << endl;

    cout << "\nThe Potentiation (^2):" << endl;
    cout << "Num1 = " << pow(num1, 2) << endl;
    cout << "Num2 = " << pow(num2, 2) << endl;

    cout << "\nThe Square Root:" << endl;
    cout << "Num1 = " << sqrt(num1) << endl;
    cout << "Num2 = " << sqrt(num2) << endl;

    cout << "\nThe Cube Root:" << endl;
    cout << "Num1 = " << cbrt(num1) << endl;
    cout << "Num2 = " << cbrt(num2) << endl;
}

int main()
{
    cout << "\nCalling the funcToCalc():\n";

    funcToCalc(126.85, 43.45);

    return 0;
}