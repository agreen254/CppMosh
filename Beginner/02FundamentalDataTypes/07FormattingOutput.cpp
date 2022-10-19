#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Spring" << "Nice" << endl
         << "Summer" << "Hot" << endl;
    
    cout << left; 
    // left is a 'sticky manipulator', meaning that it will stay active until we change it     
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
         << setw(10) << "Summer" << setw(10) << "Hot" << endl;

    cout << fixed << 12.34567 << endl;  // By default rounds to four decimal places
    cout << fixed << setprecision(10) << 12.34567 << endl;

    // Exercise: Table
    cout << setw(12) << "Course" << setw(12) << "Students" << endl
         << setw(12) << "C++" << right << setw(12) << "100" << left << endl
         << setw(12) << "JavaScript" << setw(12) << right << "50" << endl;
         
    return 0;
}