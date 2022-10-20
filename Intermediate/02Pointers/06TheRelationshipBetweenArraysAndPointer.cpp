#include <iostream>

using namespace std;

void printNumbers(int numbers[])
{
    // compiler will treat numbers as an integer pointer
    // therefore we cannot pass numbers to the size func
    // cannot pass a memory address to the size function

    numbers[0] = 0; // this change will be visible outside of the function
    // func parameters that are arrays are passed as references
    // this is for efficiency, since copying arrays can be very expensive
}

int main()
{
    int numbers[] = { 1, 2, 5 };
    cout << numbers << endl;  // hex address of first element in array
    cout << *numbers << endl;  // indirection operator gives value of first element in array

    int* ptr = numbers;
    cout << ptr << endl;  // hex address again
    cout << *ptr << endl;  // first element again
    cout << ptr[1] << endl;  // gets second element (2)

    return 0;
}