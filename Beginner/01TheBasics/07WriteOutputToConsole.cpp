#include <iostream>

using namespace std;

int main() {
    // std::cout <<
    // Standard Output Stream:
    // stream refers to a sequence of characters
    // standard output = console/terminal window
    // << is the stream insertion operator, i.e. it inserts something to the output stream
    int x = 10;
    std::cout << "x = " << x << std::endl;

    int y = 20;
    std::cout << "y = " << y << std::endl;

    cout << "x = " << x
         << endl
         <<"y = " << y
         << endl;

    // Exercise
    int sales = 95000;
    const float stateTaxRate = 0.04;
    const float countyTaxRate = 0.02;

    float stateTaxTotal = sales * stateTaxRate;
    float countyTaxTotal = sales * countyTaxRate;
    float totalTax = stateTaxTotal + countyTaxTotal;

    cout << "Gross Sales: $" << sales << endl
         << "State Taxes Paid: $" << stateTaxTotal << endl
         << "County Taxes Paid: $" << countyTaxTotal << endl
         << "Total Taxes Paid: $" << totalTax << endl;

    return 0; 
}