#include <iostream>
#include <memory>

using namespace std;

int main() 
{
    // with shared pointers, we can have two pointers pointing to the same memory location
    shared_ptr<int> x(new int);
    auto y = make_shared<int>();

    *x = 10;
    shared_ptr<int> z(x);
    if (x == z) cout << "Equal." << endl;  // prints equal
    cout << *z << endl;  // 10

    return 0;
}