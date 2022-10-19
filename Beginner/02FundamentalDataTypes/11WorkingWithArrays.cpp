#include <iostream>
#include <string>

using namespace std;

int main() {
    int numbers[5] {2, 20, 30, 40, 50};
    numbers[1] = 10;
    cout << numbers;  // returns address of array in memory
    cout << numbers[1]; 
    cout << numbers[5] << endl;  // will actually compile but just return garbage 

    // Exercise: Ask for 3 names, store names in array then print the first name
    string names[3];

    cout << "Enter first name: ";
    getline(cin, names[0]);
    cout << "Enter second name: ";
    getline(cin, names[1]);
    cout << "Enter third name: ";
    getline(cin, names[2]);

    cout << names[0];

    return 0;
}