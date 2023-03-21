#include <iostream>
using namespace std;

void printNums() { // 8)
    // Print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Skip 5 using continue
        if (i == 5) {
            continue;
        }
        cout << i << ' ';
    }
    cout << '\n';
}

int main() {
    printNums();
}