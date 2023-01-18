#include <iostream>
using namespace std;

int main() {
    // Pre-program
    string courses[8] = {"Study Hall", "AP Computer Science A", "AP Physics 1 & 2", "Macroeconomics", "English II", "US History", "Expository Writing II", "C++"};
    string teachers[8] = {"Mr. Cook", "Ms. Tina", "Mr. Toner", "Ms. Chu", "Ms. Touchette", "Ms. Yosufi", "Ms. Touchette", "Ms. Tina"};
    cout << '\n';

    // Output
    for (int i = -1; i <= 8; i++) {
        if (i == -1 || i == 8) {
            cout << '+' << string(50, '-') << '+';
        } else {
            cout << '|' << (i >= 10 ? '\0' : ' ') << i << " |";
            cout << ' ' << string(28 - (int) courses[i].size() - 2, ' ') << courses[i] << " |";
            cout << ' ' << string(17 - (int) teachers[i].size() - 2, ' ') << teachers[i] << " |";
        }
        cout << '\n';
    }
}