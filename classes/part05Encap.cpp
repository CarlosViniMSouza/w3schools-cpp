#include <iostream>

using namespace std;

class Employee {
    private:
        float salary;

    public:
        void setSalary() {
            cout << "\nInform your gross salary: ";
            cin >> salary;
            salary = salary - (salary * 0.15);
        }

        void getSalary() {
            cout << "\nYour net salary is R$" << salary << "\n" << endl;
        }
};

class Car {
    public:
        string model = "Hylux S500";
        float price = 250000.9;
        int code = 2025001001;

        void showCar() {
            cout << "\nCode Car: " << code << endl;
            cout << "Model Car: " << model << endl;
            cout << "Price Car: R$" << price << endl;
        }
};

// An derived class
class fabCar: public Car {
    public:
        string brand = "Toyota";
};

int main() {
    /*
        Encapsulation in C++ 

        The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private.
    */

    /*
        Access Private Members:
        
        To access a private attribute, use public "get" and "set" methods.
    */

    /*
        Why Encapsulation?
        
        1 - It is considered good practice to declare your class attributes as private (as often as you can). 
        
        2 - Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts.
        
        3 - Increased security of data.
    */

    Employee emp;

    emp.setSalary();
    emp.getSalary();

    /*
        Inheritance:

        In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

        derived class (child) - the class that inherits from another class base class (parent) - the class being inherited from
        To inherit from a class, use the : symbol.
    */

    fflush;

    fabCar myHylux;

    myHylux.showCar();

    cout << "\n" + myHylux.model + " is a original product from " + myHylux.brand << endl;

    return 0;

    /*
        Multilevel Inheritance:

        A class can also be derived from one class, which is already derived from another class.
    */

    /*
        Multiple Inheritance:

        A class can also be derived from more than one base class, using a ','. Example:


        class MyChildClass: public MyClass, public MyOtherClass {
        };
    */
}