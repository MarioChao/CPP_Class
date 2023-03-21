#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

void exitOn0() { // 7)
    int input;
    while (true) {
        // Input
        cout << "\nPlease enter an integer\n";
        cout << " > ";
        cin >> input;

        // Validate input
        if (cin.fail()) {
            cout << "Only enter numbers\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (input == 0) {
            cout << "Error occurred.\n";
            exit(0);
        } else {
            cout << "Valid input.\n";
        }
    }
}

int main() {
    exitOn0();
}