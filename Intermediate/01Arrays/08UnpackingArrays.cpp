#include <iostream>

using namespace std;

int main() 
{
    int values[3] = { 1, 2, 3 };

    // int x = values[0];
    // int y = values[1];
    // int z = values[2];

    // C++: Structured Binding
    // JavaScript: Destructuring
    // Python: Unpacking
    auto [x, y, z] = values;
    cout << x << ", " << y << ", " << z;


    return 0;
}