#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void findValueSlotInRandomArray() {
    // Create an array of 10 integer slots
    int arr[10];

    // Fill each slot with a random value from 1-50
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        // Generate random number by id
        arr[i] = (rand() % 50) + 1;
    }

    // Display the values
    cout << "Array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    // Get integer from user
    int userKey;
    cout << "\nEnter an integer to search for: ";
    cin >> userKey;

    // Search through array & print result
    bool foundKey = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == userKey) {
            cout << "The item " << userKey << " is in slot " << i << ".\n";
            foundKey |= 1;
        }
    }
    if (!foundKey) {
        cout << "The item " << userKey << " is not in the array.\n";
    }
}

int main() {
    findValueSlotInRandomArray();
}