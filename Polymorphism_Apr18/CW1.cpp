#include <iostream>
using std::cout;

int findArea(int x) {
    return x * x;
}

int findArea(int w, int h) {
    return w * h;
}

double findArea(int b1, int b2, int h) {
    return (b1 + b2) / 2.0 * h;
}

int main() {
    cout << "5x5 Square area: " << findArea(5) << '\n';
    cout << "2x7 Rectangle area: " << findArea(2, 7) << '\n';
    cout << "B-10 B-30 H-5 Trapezoid area: " << findArea(10, 30, 5) << '\n';
}