#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double resultFloor = floor(1.2); // We are calling (executing) the floor function
    double resultPow = pow(5, 3);
    cout << resultFloor << endl;
    cout << resultPow << endl;

    // Exercise: Write a program to compute area of circle
    const double pi = 3.14159;
    double radius;
    double area;
    
    cout << "Enter radius length: ";
    cin >> radius;

    area = pi*pow(radius, 2);

    cout << "Area = " << area << " units.";


    return 0;
}