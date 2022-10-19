#include <iostream>

using namespace std;

int main() 
{
    int numbers[5];
    numbers[0] = 10;
    numbers[4] = 20;
    numbers[30] = 30;  // Invalid index but still compiles

    int braces[5] = { 10, 20, 15 };

    return 0;
}