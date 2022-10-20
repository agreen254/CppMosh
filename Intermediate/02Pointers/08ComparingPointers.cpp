#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int y = 10;

    int* ptrX = &x;
    int* ptrY = &y;

    if (ptrX < ptrY);  // just comparing addresses
    if (*ptrX < *ptrY);  // now comparing values

    // should also make sure pointers are not nullptr
    if (ptrX != nullptr && ptrY != nullptr)
    {
        if (*ptrX == *ptrY) 
        {
            cout << "same";
        }
    }

    // exercise
    int numbers[] = { 10, 20, 30 };
    int numSize = size(numbers);
    int len = numSize - 1;
    int* ptr = numbers;

    int i = numSize - 1;
    while (i >= 0)
    {
        cout << ptr[i] << endl;
        i--;
    }

    int* lastIdx = &numbers[len];
    while (lastIdx >= numbers)  // comparing addresses
    {
        cout << *lastIdx << endl;
        lastIdx--;
    }

    return 0;
}