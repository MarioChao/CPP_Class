#include <iostream>
using namespace std;

int *getMaxValue(int *arr, int size) {
    int *ret = arr;
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        if (*ptr > *ret) {
            ret = ptr;
        }
        ptr++;
    }
    return ret;
}
void runProgram() {
    int N;
    cout << "Enter number of values:";
    cin >> N;
    
    cout << "Enter values in array:\n";
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int *maxPtr = getMaxValue(arr, N);

    cout << "Largest integer value in the array is " << *maxPtr << '\n';
}
int main() {
    runProgram();
}