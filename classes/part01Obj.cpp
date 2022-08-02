#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    float note;
    int age;

    void message() {
        cout << "\nTest Method -> Success" << endl;
    }

    void calcNotes();

    void condResult();
};

void Student::calcNotes() {
    float notes[3];

    for(int i = 1; i < 4; i++) {
        cout << "\nEnter with note " << i << " : ";
        cin >> notes[i];
    }

    note = (notes[1] + notes[2] + notes[3])/3;
}

void Student::condResult() {
    if(note <= 6.0) {
        cout << "Status: Disapproved" << endl;
    } else {
        cout << "Status: Approved" << endl;
    }
}

int main()
{
    /*
    Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

    Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

    A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
    */

    // Declaring a object-class:
    Student stu;

    cout << "\nYour name, please: ";
    getline(cin, stu.name);

    fflush;

    cout << "\nYour age, please: ";
    cin >> stu.age;

    fflush;

    stu.calcNotes();

    fflush;

    cout << "\n\nSituation Student:" << endl;
    cout << "Name: " << stu.name << endl;
    cout << "Age: " << stu.age << endl;
    cout << "Note Exam: " << stu.note << endl;
    
    stu.condResult();

    return 0;
}