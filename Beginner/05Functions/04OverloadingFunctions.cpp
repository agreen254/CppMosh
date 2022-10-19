#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// functions with the same name but different parameters
// SIGNATURE of a function consists of the function's name and number and type of parameters
// the parameters could have different names, but if func name and parameter types are identical the compiler will throw an error
// when overloading functions, each function must have a unique signature

void greet(string name)
{
    cout << "Hello, " << name;
}

void greet(string title, string name)
{
    cout << "Hello, " + title + " " + name << endl;
}

int main() 
{
    //
    greet("Aaron");
    greet("Mr", "Green");

    return 0;
}