#include <iostream>
using namespace std;

class Students {
    public:
        string name;
        double gpa;
        Students(string name, double gpa) { // 28)
            this -> name = name;
            this -> gpa = gpa;
        }
        void displayStudent() {
            cout << "Student: " << name << '\n';
            cout << "GPA: " << gpa << '\n';
        }
};

void createPrintStudent() {
    // 28)
    Students student1("Eclipsar", 6.9);
    Students student2("John", 4.0);
    student2.name = "John";
    student2.gpa = 4.0;

    student1.displayStudent();
    student2.displayStudent();
}

int main() {
    createPrintStudent();
}