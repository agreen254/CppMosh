#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int numbers[] = { 1, 2, 3, 4, 5, 6 };
    
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) cout << numbers[i] << endl; // regular for loop
    for (int number: numbers) cout << number << endl;  // range-based for loop

    string name = "Aaron Lombardo Green";
    for (char ch: name) cout << ch << endl;

    // Exercise
    // Given a list of temps, write code to calc the avg temp

    double temperatures[] = { 10, 12, 18, 20, 25 };
    short len = sizeof(temperatures) / sizeof(double);
    double sum = 0;
    
    for (double temperature: temperatures) sum += temperature;
    double average = sum / len;

    cout << "Average temp: " << average;
    return 0;
}