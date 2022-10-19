#include <iostream>

using namespace std;


void swap(int numbers[], int i, int j)
{
    // Prefer to extract and put in separate swap function
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}


void bubbleSortMosh(int numbers[], int size)
{
    for (int pass = 0; pass < size; pass++) {
        for (int i = 1; i < size; i++) {
            if (numbers[i] < numbers[i - 1]) {
                swap(numbers, i, i - 1);
            }
        }
    }
}


int main() 
{
    int numbers[] = { 2, 8, 3, 6, 9, 5, 12, 1};
    int numbersSize = size(numbers);

    // My implementation, couldn't get to work with func
    for (int i = 0; i < numbersSize; i++)
        for (int j = 0; j < numbersSize - 1; j++)
            if (numbers[j] > numbers[j + 1]) {
                int first = numbers[j];
                int second = numbers[j + 1];
                numbers[j + 1] = first;
                numbers[j] = second;
            }
    for (int number: numbers) cout << number << endl;

    cout << endl;

    int numbersTwo[] = { 0, 14, 12, 8, 2 };
    bubbleSortMosh(numbersTwo, size(numbersTwo));
    for (int number: numbersTwo) cout << number << endl;

    return 0;
}