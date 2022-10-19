#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch = 'a';  // internally represented using numbers
    cout << ch << endl;
    cout << +ch << endl;

    string name = "Aaron Muhfuggin Green";
    cout << name << endl;

    // string username;
    // cout << "Enter your name: ";
    // cin >> username;
    // cout << "Hi, " << username << '!' << endl;
    // Will only read the first set of chars before a space

    // string usernameWithSpace;
    // cout << "Enter your name: ";
    // getline(cin, usernameWithSpace);
    // cout << "Hi, " << usernameWithSpace << '!' << endl;

    string street;
    cout << "Enter your street: ";
    getline(cin, street);

    string city;
    cout << "Enter city name: ";
    cin >> city;

    string state;
    cout << "Enter state name: ";
    cin >> state;

    string zip;
    cout << "Enter zip code: ";
    cin >> zip;

    cout << street << endl << city << ", " << state << ", " << zip;

    return 0;
}