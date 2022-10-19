#include <iostream>
#include <string>

using namespace std;

int main() {

    int sales = 11'000;
    double comission;
    double conditionalComission = (sales > 10'000) ? 0.1 : 0.05;

    if (sales > 10'000) comission = 0.1;
    else                comission = 0.05;

    // Exercise
    // Have user enter two nums, store large val in a separate var and print it
    double numFirst;
    double numSecond;
    double numLargest;

    cout << "enter first num: ";
    cin >> numFirst;
    cout << "enter second num: ";
    cin >> numSecond;

    if (numFirst > numSecond) numLargest = numFirst;
    else numLargest = numSecond;

    cout << "Largest num: " << numLargest << endl;

    double numLargestConditional = (numFirst > numSecond) ? numFirst : numSecond;

    cout << "Larges num conditional: " << numLargestConditional;
    

    return 0;
}