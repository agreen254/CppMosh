#include <iostream>

using namespace std;

int linearSearch(int numbers[], int size, int target)  // may want to use size_t if array is fucking huge
{
    for (int i = 0; i < size; i++)
        if (numbers[i] == target) return i;
    return -1;
}

int main() 
{
    // Linear search algorithm: O(n)
    // Exercise: Implement this Algo
    int myArray[] = { 2, 5, 8, 12, 15 };
    int myArraySize = size(myArray);
    int target = 12;
    int idx = linearSearch(myArray, myArraySize, target);
    cout << idx;

    return 0;
}