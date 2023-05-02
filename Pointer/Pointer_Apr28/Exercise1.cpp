#include <iostream>
using namespace std;

void runProgram() {
    int a, b;
    cout << "Enter value of A: ";
    cin >> a;
    cout << "Enter value of B: ";
    cin >> b;

    int *ptrA, *ptrB;
    ptrA = &a;
    ptrB = &b;
    cout << "Value of ptrA is " << *ptrA << " stored in address " << ptrA << '\n';
    cout << "Value of ptrB is " << *ptrB << " stored in address " << ptrB << '\n';
}
int main() {
    runProgram();
}