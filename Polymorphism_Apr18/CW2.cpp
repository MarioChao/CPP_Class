#include <iostream>
using std::string;
using std::cout;

class Quadrilateral {
    private:
        double area;
        string type;
    public:
        Quadrilateral() {}
        Quadrilateral(int x) {
            // create a square
            area = x * x;
            type = "square";
        }
        Quadrilateral(int w, int h) {
            // create a rectangle
            area = w * h;
            type = "rectangle";
        }
        Quadrilateral(int b1, int b2, int h) {
            // create a trapezoid
            area = (b1 + b2) / 2.0 * h;
            type = "trapezoid";
        }
        double getArea() {
            return area;
        }
        string getType() {
            return type;
        }
};

int main() {
    Quadrilateral shape1(5);
    Quadrilateral shape2(5, 4);
    Quadrilateral shape3(2, 6, 4);

    cout << shape1.getType() << " area: " << shape1.getArea() << '\n';
    cout << shape2.getType() << " area: " << shape2.getArea() << '\n';
    cout << shape3.getType() << " area: " << shape3.getArea() << '\n';
}