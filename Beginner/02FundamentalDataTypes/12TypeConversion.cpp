#include <iostream>
#include <string>

using namespace std;

int main() {
    // Converting data from one type to another is called 'casting'
    int x = 1;
    double y = 2.2;
    double z = x + y;  // adding int to double

    cout << z;  // returns 3.2, compiler auto converts x from int to double

    int zBad = x + y;  // may encounter data loss. x is again converted, but if one has a decimal you will lose data
    int zC = x + (int)y;  // C-style casting, will get an error if not possible
    int zCpp = x + static_cast<int>(y);  // C++ casting, safer than C-style casting

    int p = 10;
    int q = 3;

    double r = p / q;  // returns 3
    double rCpp = static_cast<double>(p) / q;  // returns 3.333, can also cast q. Only need one as double.

    return 0;
}