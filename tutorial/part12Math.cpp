#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // max() and min()
    double num1, num2;

    cout << "\nWrite a number: ";
    cin >> num1;

    cout << "\nWrite other number: ";
    cin >> num2;

    cout << "\nThe maximum is: " << max(num1, num2) << endl;
    cout << "\nThe minimum is: " << min(num1, num2) << endl;

    return 0;
}