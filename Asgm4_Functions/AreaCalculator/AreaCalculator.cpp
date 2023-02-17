#include <iostream>
#include <cmath>
using namespace std;

const double pi = acos(-1);

double area_circle(int radius) {
    return pi * radius * radius;
}

int area_rectangle(int length, int width) {
    return length * width;
}

int area_square(int side) {
    return side * side;
}

double area_triangle(int base, int height) {
    return base * height / 2.0;
}

int main() {
    cout << "Shape Area Calculator version 0.01.\n";
    string dscn;
    while (true) {
        // Decorations
        cout << '\n';
        cout << "-=-=-=-=-=-=-=-=-=-\n";
        cout << '\n';
        // Commands
        cout << "1) Triangle\n";
        cout << "2) Rectangle\n";
        cout << "3) Square\n";
        cout << "4) Circle\n";
        cout << "5) Quit\n";
        // Input
        cout << "Which shape: ";
        cin >> dscn;
        // Functions
        cout << '\n';
        if (dscn == "1") { // Triangle
            int b, h;
            cout << "Base: ";
            cin >> b;
            cout << "Height: ";
            cin >> h;
            // Calculate and print
            cout << '\n';
            cout << "The area is " << area_triangle(b, h) << ".\n";
        } else if (dscn == "2") { // Rectangle
            int l, w;
            cout << "Length: ";
            cin >> l;
            cout << "Width: ";
            cin >> w;
            // Calculate and print
            cout << '\n';
            cout << "The area is " << area_rectangle(l, w) << ".\n";
        } else if (dscn == "3") { // Square
            int sideLength;
            cout << "Size length: ";
            cin >> sideLength;
            // Calculate and print
            cout << '\n';
            cout << "The area is " << area_square(sideLength) << ".\n";
        } else if (dscn == "4") { // Circle
            int radius;
            cout << "Radius: ";
            cin >> radius;
            // Calculate and output
            cout << "The area is " << area_circle(radius) << ".\n";
        } else if (dscn == "5") { // Quit
            cout << "Goodbye.\n";
            break;
        } else {
            cout << "Invalid!\n";
        }
    }
}