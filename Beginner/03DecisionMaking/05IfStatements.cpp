#include <iostream>

using namespace std;

int main() {
    
    short roomTemperature = 70;

    if (roomTemperature < 60) {
        cout << "Cold" << endl;
        cout << "Wear warm clothes" << endl;
    }
    else if (roomTemperature <= 80) cout << "Nice" << endl;
    else cout << "Hot" << endl;

    // Exercise
    int sales = 15'500;
    double comission;

    if      (sales <= 10'000)   comission = 0.10;
    else if (sales <= 15'000)   comission = 0.15;
    else                        comission = 0.20;

    cout << comission << endl;

    return 0;
}