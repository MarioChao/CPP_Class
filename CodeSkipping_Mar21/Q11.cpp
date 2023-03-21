#include <iostream>
#include <climits>
using namespace std;

int askForNumber() { // 11)
    int inputNum;
    while (true) {
        // Ask for an input
        cout << "Enter an integer between 1 and 10 (exclusive)";
        cout << " > ";
        cin >> inputNum;
        if (!cin) { // Input failed
            cout << "Enter a number!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (!(inputNum > 1 && inputNum < 10)) {
            cout << "Enter between 1 and 10 (exclusive)!\n";
            continue;
        }
        cout << "Good job!\n";
        break;
    }
    return inputNum;
}

int main() {
    askForNumber();
}