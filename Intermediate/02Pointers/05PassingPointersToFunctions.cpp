#include <iostream>

using namespace std;

const double priceIncreaseRatio = 1.2;

void increasePriceRefParameter(double& price) 
{
    price *= priceIncreaseRatio;
}

void increasePricePointer(double* price)
{
    *price *= priceIncreaseRatio;
}

void swap(int* first, int* second)
{
    int temp = *second;
    *second = *first;
    *first = temp;

    // This also works
    // int temp = *first;
    // *first = *second;
    // *second = temp;
}

int main()
{
    double price = 100;
    increasePriceRefParameter(price);
    cout << price << endl;
    increasePricePointer(&price);
    cout << price << endl;
    
    // Exercise 
    // implement swap func using two vars with pointers
    int a = 5;
    int b = 12;
    swap(&a, &b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}