#include <iostream>

using namespace std;

int main()
{

    string food = "Baked Tambaqui with Salad and Mayonnaise";
    string &otherFood = food;

    cout << "\nYour Food Requisition: " << food << endl;
    cout << "\nYour Food Reference: " << otherFood << endl;

    /*
        In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.
    */

    cout << "\nMemory Address of variable food: " << &food << endl;

    /*
        Note: The memory address is in hexadecimal form (0x..). Note that you may not get the same result in your program.
    */

    return 0;
}