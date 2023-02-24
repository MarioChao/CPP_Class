#include <iostream>
#include <fstream>

using namespace std;

void readFile() { // 6)
    // Read file
    ifstream YourFile("Ethan_ilovecoding.txt");
    string fileLine;
    
    // Read line-by-line
    while (getline(YourFile, fileLine)) {
        cout << fileLine << '\n';
    }
    
    // Close file
    YourFile.close();
}

int main() {
    readFile();
}