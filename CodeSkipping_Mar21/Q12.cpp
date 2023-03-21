#include <iostream>
using namespace std;

void printNums() { // 12)
    // Print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Skip 5
        if (i == 5) {
            continue;
        }
        // Exit if number > 7
        if (i > 7) {
            break;
        }
        cout << i << ' ';
    }
    cout << '\n';
}

int main() {
    printNums();
}