#include <iostream>
using namespace std;

void printNums() { // 10
    // Print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Exit the loop if number > 5
        if (i > 5) {
            break;
        }
        cout << i << ' ';
    }
    cout << '\n';
}

int main() {
    printNums();
}