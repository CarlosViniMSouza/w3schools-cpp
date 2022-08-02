#include <iostream>

using namespace std;

class Cell {
    public:
        int code;
        double value;
        string model;

        void showCell() {
            cout << "\nThe Code: " << code;
            cout << "\nThe Market Price: US$" << value;
            cout << "\nThe Model Car: " << model << "\n";
        }
};

// Constructor defined outside class:
Car::Cell(int a, double b, string c) {
    code = a;
    value = b;
    model = c;
}

int main() {
    /*
        A constructor in C++ is a special method that is automatically called when an object of a class is created.

        To create a constructor, use the same name as the class, followed by '()' ...
    */

    Cell tel(2022001001, 1800950.9, "Aston Martin");

    tel.showCell();

    return 0;
}