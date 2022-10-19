#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Function declaration (function prototype)
void greet(string name);

int main() 
{
    greet("Aaron");

    return 0;
}

// Function definition
void greet(string name)
{
    cout << "Hello, " + name << endl;
}