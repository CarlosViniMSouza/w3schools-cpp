#include <iostream>

using namespace std;

int main()
{
    /*
        A pointer however, is a variable that stores the memory address as its value.

        A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:
    */

    string car = "Corolla";

    string *model = &car;

    cout << "Your model car: " << car << endl;

    cout << "Address model car variable: " << &car << endl;

    cout << "Again Address model car var: " << model << endl;

    /*
        Discussion:

        Create a pointer variable with the name 'model', that points to a string variable, by using the asterisk sign * (string *model). Note that the type of the pointer has to match the type of the variable you're working with.

        Use the '&' operator to store the memory address of the variable called 'car', and assign it to the pointer.
    */

    /*
        Now, see how to show the content of variable 'model' (stored in variable 'car') using '*' (It's called "Dereference"):
    */

    cout << "The content in car variable is: " << *model << endl;

    /*
        You can also change the pointer's value. But note that this will also change the value of the original variable:
    */

    // Change the content on pointer:
    *model = "Black Fusca 1980";

    // Show the new value of pointer:
    cout << "\nThe new value of car: " << *model << endl;

    // Show the new value of original variable:
    cout << "The new car is: " << car << endl;

    return 0;
}