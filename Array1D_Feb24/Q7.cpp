#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string firstName, lastName, fileName;
    int grades[5];
    ofstream outputFile;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter the name of the file to write to: ";
    cin >> fileName;

    srand(time(nullptr));
    for (int i = 0; i < 5; i++) {
        grades[i] = rand() % 100 + 1;
    }

    outputFile.open(fileName);
    if (outputFile.is_open()) {
        outputFile << firstName << " " << lastName << endl;
        for (int i = 0; i < 5; i++) {
            outputFile << grades[i] << " ";
        }
        outputFile.close();
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
