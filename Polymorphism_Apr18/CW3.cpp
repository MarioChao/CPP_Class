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

        void changeShape(int x) {
            area = x * x;
            type = "square";
        }
        void changeShape(int w, int h) {
            area = w * h;
            type = "rectangle";
        }
        void changeShape(int b1, int b2, int h) {
            area = (b1 + b2) / 2.0 * h;
            type = "trapezoid";
        }
};

int main() {
    Quadrilateral shapes[3] = {
        Quadrilateral(6),
        Quadrilateral(6, 5),
        Quadrilateral(3, 6, 5)
    };

    Quadrilateral squares[3];
    for (int i = 0; i < 3; i++)
        squares[i] = Quadrilateral(5 - i);
    
    squares[1].changeShape(6, 6);

    double area1, area2;
    area1 = area2 = 0;
    for (Quadrilateral shape : shapes)
        area1 += shape.getArea();
    for (Quadrilateral square : squares)
        area2 += square.getArea();

    cout << "Area of shapes: " << area1 << '\n';
    cout << "Area of squares: " << area2 << '\n';
}