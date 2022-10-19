#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    cout << "1: Create Account" << endl
         << "2: Change Password" << endl
         << "3: Quit" << endl
         << "4: Help" << endl
         << "Select an option: " << endl;

    short input;
    cin >> input;

    if      (input == 1) cout << "You selected 1";
    else if (input == 2) cout << "You selected 2";
    else if (input == 3) cout << "You selected 3";
    else if (input == 4) cout << "You selected 4";

    cout << endl;

    switch (input) 
    {  // cannot use comparison operators for cases
        case 1: cout << "You selected 1"; break;
        case 2: cout << "You selected 2"; break;
        case 3: cout << "You selected 3"; break;
        case 4: cout << "You selected 4"; break;
        default: cout << "Please select a valid option."; break;
    }

    // Calculator exercise
    cout << endl;

    double first;
    double second;
    char op;
    double calc;

    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    cout << "Operator: ";
    cin >> op;

    switch (op)
    {
    case '+': calc = first + second; break;
    case '-': calc = first - second; break;
    case '*': calc = first * second; break;
    case '/': calc = first / second; break;
    case '^': calc = pow(first, second); break;
    case '%': calc = fmod(first, second); break;
    default: cout << "Enter a valid operator."; break;
    }

    cout << "Answer: " << calc << endl;

    switch (op)
    {
    case '+': cout << first + second; break;
    case '-': cout << first - second; break;
    case '*': cout << first * second; break;
    case '/': cout << first / second; break;
    case '^': cout << pow(first, second); break;
    case '%': cout << fmod(first, second); break;
    default: cout << "Enter a valid operator."; break;
    }

    return 0;
}