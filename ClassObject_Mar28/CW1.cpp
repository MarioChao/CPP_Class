#include <iostream>
using namespace std;

class Dog;
void runProgram();

int main() {
    runProgram();
}

class Dog {
    private:
        int age;
        double weight;
    public:
        Dog(int a, double w) : age(a), weight(w) {};
        int getAge() { return age; }
        int getWeight() { return weight; }
};

void runProgram() {
    Dog pet(10, 14.14);
    cout << "Age " << pet.getAge() << " dog, weighing " << pet.getWeight() << '\n';
}