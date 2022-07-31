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

    /*
    string airplanes[] = {"GOL", "TAM", "BLUE", "FedEx"};

    for (int j = 0; j < sizeof(airplanes); j++)
    {
        cout << "The model airplane: " << airplanes[j] << endl;
    }
    */

    /*
        But, i recommend that you ALWAYS enter the array size in '[]'
        Because here, the 2 loops caused an error in file executable.
    */

    /*
        Multidimensional Arrays:

        A multi-dimensional array is an array of arrays.

        To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays. Example:
    */

    int numbers[4][3] = {
        {1, 4, 9},
        {16, 25, 36},
        {49, 64, 81},
        {100, 121, 144}
    };
                        
    cout << "\nNumber in position (1, 3) is: " << numbers[0][2] << endl;

    /*
        Each set of square brackets in an array declaration adds another dimension to an array. An array like the one above is said to have two dimensions.

        Arrays can have any number of dimensions. The more dimensions an array has, the more complex the code becomes. Example array three-dimensional:
    */

    string letters[3][3][3] = {
        {
            {"a", "b", "c"},
            {"d", "e", "f"},
            {"g", "h", "i"}
        },
        {
            {"j", "k", "l"},
            {"m", "n", "o"},
            {"p", "q", "r"},
        },
        {
            {"s", "t", "u"},
            {"v", "w", "x"},
            {"y", "z", "#"}
        }
    };

    cout << "\nNumber in position (2, 1, 3) is: " << letters[1][0][2] << endl;

    /*
        To loop through a multi-dimensional array, you need one loop for each of the array's dimensions. Examples:
    */

    for(int x = 0; x < 4; x++) {
        for(int y = 0; y < 3; y++) {
            cout << numbers[x][y] << " | ";
        }
        cout << "\n";
    }

    cout << "\nNow, the array three-dimensional!\n";

    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 3; y++) {
            for(int z = 0; z < 3; z++) {
                cout << letters[x][y][z] << " | ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}