#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Global variable (global scope)
// global variables are not really great
// except for in the 'singleton' design patter
// and for constants.
const double taxRate = 0.2;

double calculateTax(int sales)
{
    return sales * taxRate;
}


int main() 
{
    // Local variable (local scope)
    int sales = 10'000;
    double taxes = calculateTax(sales);
    cout << taxes; 

    return 0;
}