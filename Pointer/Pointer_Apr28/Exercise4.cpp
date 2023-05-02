#include <iostream>
using namespace std;

void runProgram() {
    int N;
    cout << "Enter array size: ";
    cin >> N;

    int arr[N];
    cout << "Enter the values:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int *ptr = arr;
    for (int i = 0; i < N; i++) {
        cout << *(ptr + i) << ' ';
    }
    cout << '\n';
}

int main() {
    runProgram();
}