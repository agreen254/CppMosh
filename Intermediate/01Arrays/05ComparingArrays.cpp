#include <iostream>

using namespace std;

int main() 
{
    int first[] = { 10, 20, 30 };
    int second[] = { 10, 20, 30 };

    // if (first == second) cout << "equal"  will always be false, because the hex addresses are different

    bool areEqual = true;
    for (int i = 0; i < size(first); i++) 
        if (first[i] != second[i]) {
            areEqual = false;
            break;
        }

    cout << boolalpha << areEqual << endl;

    return 0;
}