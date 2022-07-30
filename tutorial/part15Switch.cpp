#include <iostream>

using namespace std;

int main()
{

    const int note;

    cout << "\nWrite the note: ";
    cin >> note;

    switch (note)
    {
    case note < 6:
        cout << "\nStudy more! Failed!";
        break;
    case note < 8:
        cout << "\nCan improve! But ok, Success!";
        break;
    case note < 10:
        cout << "\nPerfect! Congratulations!";
        break;
    default:
        cout << "\nError";
    } // this switch is broken!

    return 0;
}