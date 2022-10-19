#include <iostream>

using namespace std;

int main() 
{
    int number = 10;
    cout << &number << endl;  // & is the 'address of' operator

    // ptr must be same type as ref
    int* ptr = &number;

    // can still be accessed
    // this is bad because it may point to a random part of memory that has real data
    // should always initialize pointers
    int* ptrUnsafe;  

    int* ptrNull = nullptr;  // modern C/C++ uses this. Older versions use 0 or NULL instead of nullptr
    // if (ptrNull != nullptr) do stuff

    // * is the 'indirection' (dereferencing) operator
    // with it we can access data at the target memory location
    cout << *ptr << endl; 

    *ptr = 20;  // we have changed the value at the target memory location to 20
    cout << number << endl;  // it will be 20

    int *ptrTwo = &number;  // this is still the 'address of' operator! Can easily be confused with the indirection operator
    // best to put asterisk right after type ut avoid confusion

    // Exercise
    int x = 10;
    int y = 20;
    int* ptrE = &x;
    *ptrE *= 2;
    ptr = &y;
    *ptr *= 3;

    // x will be 20
    // y will be 60
    
    return 0;
}