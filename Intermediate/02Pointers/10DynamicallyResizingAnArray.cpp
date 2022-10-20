#include <iostream>

using namespace std;

void allSizes()
{
    int capacity = 5;
    int* nums = new int[capacity];
    int entr = 0;

    while (true)
    {
        cout << "Number: ";
        cin >> nums[entr];

        if (cin.fail()) break;  // this means user inputted something that cannot be converted to a letter
        entr++;

        if (entr == capacity) {
            capacity *= 2;
            int* temp = new int[capacity];

            for (int i = 0; i < entr; i++) temp[i] = nums[i];
            delete[] nums;
            nums = temp;
        }
    }

    for (int i = 0; i < entr; i++) cout << nums[i] << endl;

    delete[] nums;  // if user never reaches 5 entries we still need to free memory
}

int main()
{
    int* numbers = new int[5];
    int entries = 0;

    allSizes();

    while (true)
    {
        cout << "Number: ";
        cin >> numbers[entries];

        if (cin.fail()) break;  // this means user inputted something that cannot be converted to a letter
        entries++;

        if (entries == 5)
        {
            // Create a temp array (twice the size)
            // Copy all the elements from existing array to new array
            // Have "numbers" pointer point to the new array
            int* temp = new int[10];
            for (int i = 0; i < entries; i++) temp[i] = numbers[i];
            delete[] numbers;
            numbers = temp;
            // 100: [i i i i i]
            // 200: [i i i i i j j j j j]
            // we copy the i's to the memory address 200 and having the numbers pointer point to the new location
            // we must make sure to delete the initial memory we allocated or we will have a memory leak
        }

    }

    for (int i = 0; i < entries; i++) cout << numbers[i] << endl;  // always solve a problem in baby steps.


    return 0;
}