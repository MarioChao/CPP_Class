#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void findValueInRandomArray() {
    // Create an array of 10 integer slots
    int arr[10];

    // Create a vector that keeps track of unused numbers (1-50)
    vector<int> unused;
    unused.clear();
    for (int i = 1; i <= 50; i++) {
        unused.push_back(i);
    }

    // Fill each slot with a different random value from 1-50
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        // Generate random number by id
        int id = rand() % ((int) unused.size());
        arr[i] = unused[id];
        // Delete the number from unused
        swap(unused[id], unused.back());
        unused.pop_back();
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
            cout << "The item " << userKey << " is found at position " << i << "!\n";
            foundKey |= 1;
        }
    }
    if (!foundKey) {
        cout << "The item " << userKey << " is not in the array.\n";
    }
}

int main() {
    findValueInRandomArray();
}