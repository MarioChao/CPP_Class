#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void arrayCopyTest() { // 2)
    // Create an array of 10 integers
    int arrN = 10;
    int arr[arrN];

    // Fill the array with random numbers (1-100)
    srand(time(0));
    for (int i = 0; i < arrN; i++) {
        arr[i] = rand() % (100 - 1 + 1) + 1;
    }

    // Copy array
    int arr2[arrN];
    copy(arr, arr + arrN, arr2);
    arr[arrN - 1] = -7;
    
    // Display contents
    for (int i = 0; i < arrN; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    for (int i = 0; i < arrN; i++) {
        cout << arr2[i] << ' ';
    }
    cout << '\n';
}

int main() {
    arrayCopyTest();
}