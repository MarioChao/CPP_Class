#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class Point;
class Triangle;
void runProgram();

int main() {
    runProgram();
}

double EuclideanDist(int x1, int y1, int x2, int y2) {
    int a = x2 - x1;
    int b = y2 - y1;
    return sqrt(a * a + b * b);
}

class Point {
    private:
        int x, y;
    public:
        Point() {};
        Point(int x, int y) {
            this -> x = x;
            this -> y = y;
        }
        void New(int x, int y) {
            this -> x = x;
            this -> y = y;
        }
        double distanceFrom(Point other) {
            return EuclideanDist(x, y, other.x, other.y);
        }
        int getX() { return x; }
        int getY() { return y; }
};

class Triangle {
    private:
        Point points[3];
        double side1, side2, side3, area;
    public:
        Triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
            points[0].New(x1, y1);
            points[1].New(x2, y2);
            points[2].New(x3, y3);

            side1 = points[0].distanceFrom(points[1]);
            side2 = points[0].distanceFrom(points[2]);
            side3 = points[1].distanceFrom(points[2]);
            // Cross product * 1/2
            int vec[2][2] = {
                {x2 - x1, y2 - y1},
                {x3 - x1, y3 - y1}
            };
            area = abs(0.5 * (vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0]));
        }
        string getCoordinateFormatted(int pointIndex) {
            return "(" + to_string(points[pointIndex].getX()) + ", " + to_string(points[pointIndex].getY()) + ")";
        }
        double getSide1() { return side1; }
        double getSide2() { return side2; }
        double getSide3() { return side3; }
        double getArea() { return area; }
};

void runProgram() {
    // Create triangle
    srand(time(0));
    int nums[6];
    for (int i = 0; i < 5; i++) {
        nums[i] = rand() % 50;
    }
    Triangle myTri(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5]);
    
    // Output
    for (int i = 0; i < 3; i++) {
        cout << myTri.getCoordinateFormatted(i);
        cout << " \n"[i == 3 - 1];
    }
    cout << myTri.getSide1() << ' ' << myTri.getSide2() << ' ' << myTri.getSide3() << '\n';
    cout << "Area: " << myTri.getArea() << '\n';
}