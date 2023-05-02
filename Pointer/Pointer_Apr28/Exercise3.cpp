#include <iostream>
using namespace std;

void runProgram() {
    int num;
    cout << "Enter number:";
    cin >> num;
    cout << "The pointer value is " << num << '\n';
    cout << "THe memory address is: " << &num << '\n';
}

int main() {
    runProgram();
}