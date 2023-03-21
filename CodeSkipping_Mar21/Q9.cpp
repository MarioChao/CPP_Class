#include <iostream>
using namespace std;

void findFirstEven(int (&arr)[10]) { // 9)
    // Accepts an array reference in order to use sizeof()
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        // Check if number is even
        if (arr[i] % 2 == 0) {
            cout << "The first even number is " << arr[i] << ", found at index " << i << '\n';
            break;
        }
    }
}

int main() {
    int arr[10] = {9, 5, 31, 185, 392, 91, 150};
    findFirstEven(arr);
}