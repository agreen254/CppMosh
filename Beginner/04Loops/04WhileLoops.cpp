#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++) cout << i << endl;

    int i = 1;  
    // cannot declare our while loop var inside like in a for loop
    // if we know ahead of time the number of repetitions, for loops are better
    while(i <= 5) {
        cout << i << endl;
        i++;
    }

    int number = 0;
    while (number < 1 || number > 5) {
        cout << "Number: ";
        cin >> number;

        if (number < 1 || number > 5) {
            cout << "Enter a number between one and five." << endl;
        }
    }

    // Exercise
    // Declare a secret num and ask a user to guess until they're right

    int secretNum = 5;
    int userGuess;

    while (userGuess != secretNum) {
        cout << "Guess the number between one and ten: ";
        cin >> userGuess;
    }
    cout << "Correct!";

    return 0;
}