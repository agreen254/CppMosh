#include <iostream>

using namespace std;

int main() 
{
    int numbers[] = { 2, 6, 9 };
    int* ptr = numbers;

    ptr++;  // what does this do?
    // say the pointer points to 100
    // the int type takes 4 bytes, so if we only increment by 1 we will still be in the bytes for that array element
    // so the ++ increments by 4 instead, now pointing to the second element of the array
    cout << *ptr << endl;  // should see 6 instead of 2

    ptr--;
    cout << *ptr << endl;  // should see 2 now
    cout << *(ptr + 1) << endl;  // back to 6
    cout << ptr[1] << endl;  // 6, generally best format
    cout << numbers[1] << endl;  // 6
    // cout << *(ptr * 2) << endl;  // won't work
    // can only perform addition and subtraction with pointers

    return 0;
}