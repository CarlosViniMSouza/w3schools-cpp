#include <iostream>
#include <cmath>

using namespace std;

int main() {

    struct {
        string name;
        int age;
        double note;
    } student;

    double notes[3];

    cout << "\nYour name, please: ";
    getline(cin, student.name);

    fflush;

    // for access the infos struct:
    cout << "\nYour age, please: ";
    cin >> student.age;

    fflush;

    for(int i = 1; i < 4; i++) {
        cout << "\nEnter with note num." << i << ": ";
        cin >> notes[i];
    }

    student.note = (notes[1] + notes[2] + notes[3])/3;

    fflush;

    cout << "\nInfos Student" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Final Note: " << student.note << endl;

    return 0;
}