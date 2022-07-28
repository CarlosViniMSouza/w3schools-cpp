#include <iostream>
#include <string>

// Here, i'll give any annotations about manipulate strings with C++

using namespace std;

main()
{
    string firstName = "Carlos ";
    string lastName = "Souza";

    cout << "Your complete name is: " << firstName.append(lastName) << endl;

    // Obs.: Use the operator '+' for 'sum numbers' and 'concatenate strings'!!

    // For know the length of a string, use the method 'length()' or 'size()'. Example:

    string name = firstName.append(lastName);

    cout << "\nYour name have (lenght): " << name.length() << endl;

    cout << "Your name have (size): " << name.size() << endl;

    // For insert your name complete, use the method 'getline(cin, <var>)'. Example:

    cout << "\nYour name, please: ";
    getline(cin, name);
    cout << "Thanks, Mr(s). " << name << endl;

    // For ommit the 'using namespace std', insert 'std::' before commands. Examples:

    /*

    #include <iostream>
    #include <string>

    int main() {
        std::string greeting = "Hello";
        std::cout << greeting;
        return 0;
    }

    */

    return 0;
}