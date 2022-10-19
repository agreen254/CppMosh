#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << sizeof(int) << endl;
    cout << numeric_limits<int>::min() << endl
         << numeric_limits<int>::max() << endl;

    int numberHigh = numeric_limits<int>::max();
    numberHigh++;
    cout << numberHigh << endl;

    int numberLow = numeric_limits<int>::min();
    numberLow--;
    cout << numberLow << endl << endl;

    // if you have a max int value and increment it ++, it will overflow to the minimum int value (negative 2B)
    // Exercise

    cout << sizeof(float) << endl;
    cout << numeric_limits<float>::min() << endl
         << numeric_limits<float>::max() << endl << endl;

    cout << sizeof(short) << endl;
    cout << numeric_limits<short>::min() << endl
         << numeric_limits<short>::max() << endl << endl;

    cout << sizeof(bool) << endl;
    cout << numeric_limits<bool>::min() << endl
         << numeric_limits<bool>::max() << endl << endl;
}