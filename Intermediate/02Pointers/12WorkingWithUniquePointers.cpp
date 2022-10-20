#include <iostream>
#include <memory>

using namespace std;

int main() 
{
    // A unique pointer is a pointer that 'owns' the piece of memory it points to
    // we then cannot have two pointers pointing to the same location
    unique_ptr<int> x(new int);  // creating an integer pointer, passing it to object x, which is an instance of the unique_ptr class
    cout << x << endl;  // some mem address
    *x = 10;
    cout << *x << endl;  // can dereference it; prints 10
    // x++, x + 1, x - 5  // cannot perform any arithmetic operations on it

    unique_ptr<int> y = make_unique<int>();
    auto z = make_unique<int>();  // same as above line
    auto numbers = make_unique<int[]>(10);
    numbers[0] = 10;
    cout << numbers[0];  // prints 10

    return 0;
}