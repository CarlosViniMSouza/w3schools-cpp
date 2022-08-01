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

void exchangeValues(int &x, int &y)
{
    int z = x; // store the 'x' content
    x = y;
    y = z;
    // Now, 'x' and 'y' exchange yours values!
}

int funCalcBas(int num1, int num2)
{
    return round(num1 + num2 - (num1 * num2) / num1);
}

double funCalcBas(double num1, double num2)
{
    return num1 + num2 - (num1 * num2) / num1;
}

int main()
{
    /*
       int num01 = 10;
       int num02 = 15;

       cout << "\nCalling the funcToCalc():\n";

       funcToCalc(126.85, 43.45);
    */

    /*
        You can also pass a reference to the function. This can be useful when you need to change the value of the arguments.
    */

    /*
        cout << "\nNormally, we have:" << endl;

        cout << num01 << " and " << num02 << endl;

        cout << "\nCalling the exchangeValues():\n";

        exchangeValues(num01, num02);

        cout << num01 << " and " << num02 << endl;
    */

    /*
        Overloading a Function:

        Instead of defining two functions that should do the same thing, it is better to overload one.
    */

    int vInt = funCalcBas(14, 4);

    int vDouble = funCalcBas(15.5, 3.5);

    cout << "Result in version int: " << vInt << "\n";

    cout << "Result in version double: " << vDouble << "\n";

    return 0;
}