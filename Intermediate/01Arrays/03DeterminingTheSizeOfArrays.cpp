#include <iostream>

using namespace std;

int main() 
{
    int numbers[] = { 10, 20 };
    int numbersLenSizeOf = sizeof(numbers) / sizeof(int);
    int numbersLenSize = size(numbers);

    for (int number: numbers) cout << number << endl;
    for (auto number: numbers) cout << number << endl;
    for (int i = 0; i < numbersLenSizeOf; i++) cout << numbers[i] << endl;
    for (int i = 0; i < numbersLenSize; i++) cout << numbers[i] << endl;
    

    return 0;
}