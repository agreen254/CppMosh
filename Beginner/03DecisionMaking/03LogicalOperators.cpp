#include <iostream>

using namespace std;

int main() {

    int age = 20;
    int salary = 50'000;

    bool isEligibleAnd = age > 18 && age < 65;  // compiler evaluates left to right
    bool isEligibleOr = age > 18 || age < 65;

    bool isEligibleTotus = (age > 18 && age < 65) && (salary > 30'000);

    cout << boolalpha << isEligibleAnd << endl;
    cout << boolalpha << !isEligibleAnd << endl;

    return 0;
}