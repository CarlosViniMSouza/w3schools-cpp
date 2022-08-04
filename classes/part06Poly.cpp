#include <iostream>

using namespace std;

class Student {
    private:
        int code = 2022001004;
        bool active = true;
        string course = "Software Eng.";

    public:
        void showInfos() {
            cout << "\nInstitutional Code: " << code << endl;
            cout << "Active on Course: " << active << endl;
            cout << "Student Course: " << course << endl;
        }
};

class Academic: public Student {
    public:
        void showInfos() {
            cout << "\nStudent correctly subscribed!" << endl;
        }
};

class Researcher: public Student {
    public:
        void showInfos() {
            cout << "\nResearcher correctly in operation!" << endl;
        }
};


int main() {
    /*
        Polymorphism
        
        Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

        Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.
    */

    Student student;
    Academic academic;
    Researcher researcher;

    student.showInfos();
    academic.showInfos();
    researcher.showInfos();

    return 0;
}