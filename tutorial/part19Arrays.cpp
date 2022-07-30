#include <iostream>
#include <array>

using namespace std;

int main()
{
    /*
        How to declare array: <type> <var_name>[<quant>]
        Example:
    */

    string cars[3] = {"chevrolet", "volks", "fiat"};

    // using loop for() traversing a array:
    for (int i = 0; i < 3; i++)
    {
        cout << "The model car: " << cars[i] << endl;
    }

    /*
        You don't have to specify the size of the array.
        But if you don't, it will only be as big as the elements that are inserted into it:
        Example:
    */

    string airplanes[] = {"GOL", "TAM", "BLUE", "FedEx"};

    for (int j = 0; j < sizeof(airplanes); j++)
    {
        cout << "The model airplane: " << airplanes[j] << endl;
    }

    // But, i recommend that you ALWAYS enter the array size in '[]'
    // Because here, the 2 loops caused an error in file executable

    /*

    Multidimensional Arrays:

    */

    return 0;
}