#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void increasePriceVoid(double price)
{
    price *= 1.2;  // different var from one in main
}

double increasePriceDouble(double price)
{
    // Copy operation. Can be very expensive for objects that house a lot of data
    price *= 1.2;
    return price;
}

void increasePriceRef(double& price)
{
    // the & declares a reference parameter
    // references an existing variable
    // pass to the function, but no copy is taken

    price *= 1.2;
}

void greet(const string& name)
{
    cout << "Hello, " + name << endl;
    name = "Big A";  // const in param decleration stops name from changing
}


int main() 
{
    double price = 100;
    increasePriceVoid(price);  // returns 100; scope of variables isn't what we want
    cout << price << endl;

    double updatedPrice = increasePriceDouble(price);
    cout << updatedPrice << endl;

    increasePriceRef(price);
    cout << price << endl;

    string name = "Aaron";
    greet(name);
    cout << name << endl;  // side effect of ref parameter

    return 0;
}