#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double calculateTax(double income, double taxRate = 0.20)
{
    // ALWAYS code the parameters that have a default value AFTER those that don't
    return income * taxRate;
}

int main() 
{
    double taxes = calculateTax(10'000, 0.30);
    cout << taxes << endl;

    return 0;
}