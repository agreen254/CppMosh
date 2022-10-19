#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    // do-while loops always get executed at least once, because condition is evaluated after
    // in C++ a variable is ONLY accessible INSIDE the block it was DECLARED IN
    int number;
    do {
        cout << "Number: ";
        cin >> number;
    } while (number < 1 || number > 5);

    return 0;
}