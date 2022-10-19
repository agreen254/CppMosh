#include <iostream>

using namespace std;

int main() 
{
    int first[] = { 10, 20, 30 };
    int second[size(first)];
    // int second[] = first;  invalid
    // int second[3];
    // second = first;  invalid, cannot assign one array to another one
    // if you want to copy an array, must loop over it and copy each element separately

    for (int i = 0; i < size(first); i++) second[i] = first[i];
    for (int number: second) cout << number << endl;

    return 0;
}