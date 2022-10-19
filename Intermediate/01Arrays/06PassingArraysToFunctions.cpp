#include <iostream>

using namespace std;

// int[] -> int*
// int* is an integer pointer, like the hex number, not an array
void printNumbers(int numbers[], int size)
{
    // for (int number: numbers) cout << number;
    // for (int i = 0; i < size(numbers); i++) cout << numbers[i];
    // both are just using integer pointers, so they will not work

    for (int i = 0; i < size; i++) cout << numbers[i];  // it just works
}

int main() 
{


    return 0;
}