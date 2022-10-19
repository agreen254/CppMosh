#include <iostream>

using namespace std;

int main() {
    double price = 99.99;
    const float interestRate = 3.67f;  // if you don't use the 'f', the compiler will stick it in a double by default
    long fileSize = 90000L; // will be treated as int by default if don't use L
    char letter = 'e';
    bool areWeBoolin = true;
    auto amBoolean = true;

    int number {};  // auto init to 0
    int garbage; // auto init to some random number, aka 'garbage'

    return 0;
}