#include <iostream>

using namespace std;

int main()
{
    // allocated in the Stack
    // Stack variables get auto cleanup once they go out of scope
    // int numbers[10];  // if we need more space we can allocate it on demand, but cannot declare it like this

    // allocated in the Heap (Free Store)
    // if we forget to deallocate this variable once it goes out of scope, it will continue to get bigger and bigger
    // eventually our program will crash
    // this is called a Memory Leak
    // constantly consuming more and more memory
    int* numbers = new int[10];
    delete[] numbers;

    int* number = new int;  // can also declare a single int
    delete number;

    // not mandatory, but good practice is to reinitialize the vars to nullptr
    number = nullptr;
    numbers = nullptr;
    return 0;
}