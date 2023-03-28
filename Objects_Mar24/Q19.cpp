#include <iostream>
using namespace std;

class Students {
    public:
        string name;
        double gpa;
        void displayStudent() { // 19)
            cout << "Student: " << name << '\n';
            cout << "GPA: " << gpa << '\n';
        }
};

void createPrintStudent() {
    Students student1;
    student1.name = "Eclipsar";
    student1.gpa = 6.9;
    
    Students student2;
    student2.name = "John";
    student2.gpa = 4.0;

    // 19)
    student1.displayStudent();
    student2.displayStudent();
}

int main() {
    createPrintStudent();
}