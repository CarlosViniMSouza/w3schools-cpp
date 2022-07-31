#include <iostream>

using namespace std;

int main() {

    string food = "Baked Tambaqui with Salad and Mayonnaise";
    string &otherFood = food;

    cout << "\nYour Food Requisition: " << food << endl;
    cout << "\nYour Food Reference: " << otherFood << endl;

    return 0;
}