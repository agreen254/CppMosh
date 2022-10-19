#include <iostream>

using namespace std;

int main() {

    // !
    // &&
    // ||

    // * and /
    // + and -

    bool a = true;
    bool b = false;
    bool c = false;

    bool resultOne = b && !a;  // first eval !a, therefore returns false
    bool resultTwo = a || b && c;  // returns true
    bool resultThree = (a || b) && c;  // returns false

    cout << boolalpha << resultOne << endl;
    cout << resultTwo << endl;
    cout << resultThree << endl;

    /*
    Exercise:
    Job applicant should be a US Citizen and either have
    a Bachelor's degree or at least two years of work experience
    */

    bool isCitizen = false;
    bool hasBachelorDegree = true;
    short yearsExperience = 10;

    bool isEligibleForJob = isCitizen && (hasBachelorDegree || yearsExperience >= 2);

    cout << isEligibleForJob << endl;

    return 0;
}