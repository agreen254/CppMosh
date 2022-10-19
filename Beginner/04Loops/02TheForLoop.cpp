#include <iostream>

using namespace std;

int main() {

    for (int i = 0; i < 10; i++) 
    {
        if (i % 2 != 0) cout << i << endl;
    }

    // Exercise
    // Ask user for a positive number. Print factorial of that number

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) cout << "Cannot do factorial of a negative number.";
    else {
        int factorial = 1;
        for (int i = 1; i <= num; i++) factorial *= i;
        cout << factorial;
    }


    return 0;
}