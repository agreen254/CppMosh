#include <iostream>

using namespace std;

int main() {
    // Narrowing is when you initialize a variable of a smaller type using a larger type
    int number = 1'000'000;

    // because we are converting int to short, it is a narrowing conversion
    // ergo will result in this 'narrowing down'
    short anotherNum = number;
    cout << anotherNum << endl;

    short shorty = 550;
    int inty {shorty};
    cout << shorty;  // Not an issue when going from smaller to bigger!

    return 0;  
}
