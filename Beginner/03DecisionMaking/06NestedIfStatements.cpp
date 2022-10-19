#include <iostream>

using namespace std;

int main() {
    // US Citizen
    //     CA Resident: tuition = 0
    //     Non-resitent: tuition = 1000
    // Not a Citizen
    //     tuition = 3000

    bool isCitizen = true;
    bool caResident = false;
    int tuition = 0;

    if (isCitizen) {
        if (!caResident) tuition = 1000;
    }
    else tuition = 3000;

    return 0;
}