#include <iostream>
using namespace std;

int main() {
    string Name, Eyes, Teeth, Hair;
    int Age, Height, Weight;
    double HeightCM, WeightKG;

    Name = "Zed A. Shaw";
    Age = 35;     // not a lie
    Height = 74;  // inches
    HeightCM = Height * 2.54;
    Weight = 180; // lbs
    WeightKG = Weight * 0.453592;
    Eyes = "Blue";
    Teeth = "White";
    Hair = "Brown";

    cout << "Let's talk about " << Name << ".\n";
    cout << "He's " << HeightCM << " cm tall.\n";
    cout << "He's " << WeightKG << " kg heavy.\n";
    cout << "Actually, that's not too heavy.\n";
    cout << "He's got " << Eyes << " eyes and " << Hair << " hair.\n";
    cout << "His teeth are usually " << Teeth << " depending on the coffee.\n";

    // This line is tricky; try to get it exactly right.
    cout << "If I add " << Age << ", " << HeightCM << ", and " << WeightKG << " I get " << (Age + HeightCM + WeightKG) << ".\n";
}