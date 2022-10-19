#include <iostream>

using namespace std;

int main() 
{
    // Three scenarios
    // 1) data is constant but pointer is not
    // 2) pointer is constant
    // 3) both data and pointer are constant

    const int x = 10;
    const int* ptr = &x;  // int pointer cannot point to const int variable, must be const int pointer to work

    // *ptr = 20; constant so it will throw an error
    int y = 20;
    ptr = &y;  // compiles, pointer is not constant

    int p = 2;
    int* const ptrTwo = &p;  // now pointer itself is constant, so we cannot change it's value
    int q = 15;
    // ptrTwo = &y; throws error
    // when using constant pointers must always initialize them

    const int r = 10;
    const int* const ptrR = &r;  // now both are constants, constant pointer pointing to constant integer

    return 0;
}