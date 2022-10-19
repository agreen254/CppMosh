#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "(" << i << ", " << j << ")" << endl;
        }
    }

    // Exercise
    int num;
    cout << "Enter number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Rows: ";
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j <= i; j++) cout << "*";
    cout << endl;
    }

    return 0;
}