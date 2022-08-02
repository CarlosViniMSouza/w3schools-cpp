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

int main() {
    /*
        Encapsulation in C++ 

        The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private.
    */

    /*
        Access Private Members:
        
        To access a private attribute, use public "get" and "set" methods.
    */

    Employee emp;

    emp.setSalary();
    emp.getSalary();
    
    return 0;

    /*
        Why Encapsulation?
        
        1 - It is considered good practice to declare your class attributes as private (as often as you can). 
        
        2 - Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts.
        
        3 - Increased security of data.
    */
}