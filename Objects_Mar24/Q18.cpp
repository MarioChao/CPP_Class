#include <iostream>
using namespace std;

class Students { // 18)
    public:
        string name;
        double gpa;
};

void createPrintStudent() {
    // 18)
    Students student1;
    student1.name = "Eclipsar";
    student1.gpa = 6.9;

    cout << "Student: " << student1.name << '\n';
    cout << "GPA: " << student1.gpa << '\n';
    
    Students student2;
    student2.name = "John";
    student2.gpa = 4.0;

    cout << "Student: " << student2.name << '\n';
    cout << "GPA: " << student2.gpa << '\n';
}

int main() {
    createPrintStudent();
}