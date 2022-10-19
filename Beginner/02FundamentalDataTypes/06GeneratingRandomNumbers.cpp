#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Will always get the same random num if using the same seed!
    // using time will help get around this
    long elapsedSeconds = time(nullptr);  // seconds since 1 Jan 1970
    srand(elapsedSeconds);
    srand(time(nullptr));
    int numberRand = rand() % 10;  // can only be numbers 0 to 9
    cout << numberRand << endl;

    // Exercise: Write a program to roll a random die
    // to limit range: [rand() % (maxVal - minVal + 1)] + minVal
    const short dieMaxRoll = 6;  // don't forget to use const!
    const short dieMinRoll = 1;

    int rollOne = (rand() % (dieMaxRoll - dieMinRoll + 1)) + dieMinRoll;
    int rollTwo = (rand() % (dieMaxRoll - dieMinRoll + 1)) + dieMinRoll;
    cout << "You rolled: " << rollOne << ", " << rollTwo;
    return 0;
}