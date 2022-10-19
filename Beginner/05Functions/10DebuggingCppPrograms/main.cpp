#include <iostream>
#include <cmath>
#include <string>

#include "utils/greet.hpp"

using namespace std;
// using messaging::greet;  // import only greet function from messaging namespace

void printOddNumbers(int limit)
{
    for (int i = 0; i < limit; i++) 
    {
        if (i % 2 != 0) cout << i << endl;
    }
}

int main() 
{
    messaging::greet("Aaron Lombardo Green");
    // greet("Aaron Lombardo Green");

    printOddNumbers(10);
    return 0;
}