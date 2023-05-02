#include <iostream>
using namespace std;

int findMax(int[], int);
int findMin(int[] ,int);
void findMaxMin(int[], int, int*, int*);

void runProgram() {
    int arr[] = {4, 4, 7, 5, 8, 8, 8, 1, 0};
    int N = sizeof(arr) / sizeof(int);
    cout << "Array: ";
    for (int i : arr) cout << i << ' ';
    cout << '\n';

    cout << "Maximum number is: " << findMax(arr, N) << '\n';
    cout << "Minimum number is: " << findMin(arr, N) << '\n';
    int minA, maxA;
    findMaxMin(arr, N, &minA, &maxA);
    cout << "findMaxMin():\n";
    cout << "maxPtr stores the value " << maxA << " at address " << &maxA << '\n';
    cout << "minPtr stores the value " << minA << " at address " << &minA << '\n';
}

int main() {
    runProgram();
}

int findMax(int numbers[], int size) {
    int ret = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > ret) ret = numbers[i];
    }
    return ret;
}

int findMin(int numbers[], int size) {
    int ret = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < ret) ret = numbers[i];
    }
    return ret;
}

void findMaxMin(int numbers[], int size, int *min, int *max) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] < *min) *min = numbers[i];
        if (numbers[i] > *max) *max = numbers[i];
    }
}