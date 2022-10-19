#include <iostream>

using namespace std;

int main() {
    int userInputValue;
    cout << "Enter a value: ";
    cin >> userInputValue; 
    // >> is the stream extraction operator; it is the opposite of the stream insertion operator
    // think of the direction of the data flow if confused
    cout << userInputValue << endl;

    double userInputOne;
    double userInputTwo;
    cout << "Enter values for x and y: ";
    cin >> userInputOne >> userInputTwo;
    cout << userInputOne + userInputTwo << endl;

    // Exercise: Convert Temperatures from Fahrenheit to Celsius
    double tempInF;
    cout << "Enter a temperature in degrees Fahreneit: ";
    cin >> tempInF;

    double tempInC = 5 * (tempInF - 32) / 9;
    cout << "Temp in Celsius is " << tempInC << " degrees.";

    return 0;
}