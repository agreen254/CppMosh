#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    cout << "Ligma nuts.";

    // break: breaks out of a loop
    // continue: skip an interation

    for (int i = 1; i < 5; i++) {
        if (i % 3 != 0) cout << i << endl;
    }

    for (int i = 1; i < 5; i++) {
        if (i % 3 == 0) continue;
        cout << i << endl;
    }

    while (true) {
        cout << "Number: ";
        int number;
        cin >> number;

        if (number >= 1 && number <= 5) break;
        cout << "Number must be between one and five." << endl;
    }

    return 0;
}