#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void greet(string name)  // parameters are defined here -- firstName, lastName
{
// Body of function
cout << "Hello, " << name << "!" << endl;
}

string fullName(string firstName, string lastName)
{
    // Concatenating strings
    return firstName + " " + lastName;
}

int exercise(int first, int second)
{
    // pass means to input arguments
    // receives two integers and returns the maximum of the two.
    if (first > second) return first;
    else if (second > first) return second;
    else {
        cout << "The numbers are equal!";
        return 0;
    }
}

int exerciseTwo(int first, int second)
{
    // receives two integers and returns the maximum of the two.
    return (first > second) ? first : second;
}

int main() 
{
    string name = fullName("Aaron", "Green");
    greet(name);  // calling/invoking/executing function, arguments -- "Aaron", "Green"
    cout << name << endl;

    int resultOne = exercise(5, 10);
    cout << resultOne << endl;
    int resultTwo = exercise(2, 1);
    cout << resultTwo << endl;
    exercise(3, 3);

    return 0;
}
