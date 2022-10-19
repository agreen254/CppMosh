#include <iostream>

using namespace std;

int main() {
    int x = 10;
    x > 5;  // Boolean expression
    x >= 5;  // expressions are pieces of code that produce a value
    x < 5;
    x <= 5;
    x == 5;  // use two equals signs, one equals sign is the 'assignment' operator
    x != 5;

    bool resultOne = x != 5;

    int y = 5;
    bool resultTwo = x != y;

    cout << boolalpha << resultOne;
    cout << boolalpha << resultTwo;

    double q = 5;
    bool resultThree = x == q;  // compiler auto casts x to double

    char first = 'a';
    char second = 'A';
    bool resultChar = first == second;
    cout << resultChar;  // false
    
    return 0;
}