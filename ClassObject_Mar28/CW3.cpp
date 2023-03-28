#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Student;
void runProgram();

int main() {
    runProgram();
}

class Student {
    private:
        string name;
        int age, gradeLevel;
        double gpa; // average % of grades * 5 
        char gender; // 'm' or 'f'
        double grades[4]; // [0] is English, [1] is Math, [2] is Science, [3] is Social Studies
    public:
        Student(string n, int a, int g, char gen) {
            name = n;
            age = a;
            gradeLevel = g;
            gender = gen;
        }
        void calcGPA() {
            // Calculates and sets GPA to the average percentage of grades * 5
            double avg = 0;
            for (int i = 0; i < sizeof(grades) / sizeof(grades[0]); i++) {
                avg += grades[i] / 100;
            }
            avg /= (sizeof(grades) / sizeof(grades[0]));
            gpa = avg * 5;
        }
        void setGrade(string course, double grade) {
            // Sets the grade of a given course, and updates GPA
            grades[getCourseId(course)] = grade;
            calcGPA();
        }
        void printGrades() {
            // Prints out the users individual grades and GPA
            for (int i = 0; i < sizeof(grades) / sizeof(grades[0]); i++) {
                cout << grades[i] << ' ';
            }
            cout << '\n';
            cout << getGPA() << '\n';
        }
        double getGPA() {
            // Returns the GPA
            return gpa;
        }
        double getGrade(string course) {
            // Returns the grade of a given course
            return grades[getCourseId(course)];
        }
        int getCourseId(string course) {
            // Returns the index of a corresponding course name
            if (course == "English") {
                return 0;
            }
            if (course == "Math") {
                return 1;
            }
            if (course == "Science") {
                return 2;
            }
            if (course == "Social Studies") {
                return 3;
            }
            return -1;
        }
        string getName() {
            // Returns the student's name
            return name;
        }
};

void runProgram() {
    // Create two students with random grates
    srand(time(0));
    Student stud1("Defa", 8, 3, 'm');
    Student stud2("Jahova", 1, -4, 'f');

    string courses[4] = {"English", "Math", "Science", "Social Studies"};
    // Student 1
    for (int i = 0; i < sizeof(courses) / sizeof(courses[0]); i++) {
        double precisFactor = 100; // Two-digits after decimal
        double grade = rand() % (100 * (int) precisFactor + 1) / precisFactor; // Random number from 0 ~ 100
        stud1.setGrade(courses[i], grade);
    }
    // Student 2
    for (int i = 0; i < sizeof(courses) / sizeof(courses[0]); i++) {
        double precisFactor = 100; // Two-digits after decimal
        double grade = rand() % (100 * (int) precisFactor + 1) / precisFactor; // Random number from 0 ~ 100
        stud2.setGrade(courses[i], grade);
    }

    // Print and compare grades and GPA
    for (int i = 0; i < sizeof(courses) / sizeof(courses[0]); i++) {
        double scores[2];
        scores[0] = stud1.getGrade(courses[i]);
        scores[1] = stud2.getGrade(courses[i]);
        cout << stud1.getName() << " scores " << scores[0] << " on " << courses[i] << '\n';
        cout << stud2.getName() << " scores " << scores[1] << " on " << courses[i] << '\n';
        if (scores[0] > scores[1]) {
            cout << stud1.getName() << " scores higher than " << stud2.getName() << " by " << scores[0] - scores[1] << " points\n";
        } else if (scores[0] < scores[1]) {
            cout << stud2.getName() << " scores higher than " << stud1.getName() << " by " << scores[1] - scores[0] << " points\n";
        } else {
            cout << stud1.getName() << " scores the same amount as " << stud2.getName() << "\n";
        }
        cout << '\n';
    }
    double gpas[2];
    gpas[0] = stud1.getGPA();
    gpas[1] = stud2.getGPA();
    cout << stud1.getName() << "'s GPA is " << gpas[0] << '\n';
    cout << stud2.getName() << "'s GPA is " << gpas[1] << '\n';
    if (gpas[0] > gpas[1]) {
        cout << stud1.getName() << " has a higher GPA than " << stud2.getName() << " by " << gpas[0] - gpas[1] << "\n";
    } else if (gpas[0] < gpas[1]) {
        cout << stud2.getName() << " has a higher GPA than " << stud1.getName() << " by " << gpas[1] - gpas[0] << "\n";
    } else {
        cout << stud1.getName() << " has the same GPA as " << stud2.getName() << "\n";
    }
}