#include <iostream>
using namespace std;

int main() {
    cout << "I will now count my chickens:\n"; // Print out the statement in quotes

    cout << "Hens " << (25 + 30 / 6.0) << '\n'; // Print out a string and a number evaluated from an expression
    cout << "Roosters " << (100 - 25 * 3 % 4) << '\n'; // Print out a string and a number evaluated from an expression

    cout << "Now I will count the eggs:\n"; // Print out the statement in quotes

    cout << (3 + 2 + 1 - 5 + 4 % 2 - 1.0 / 4 + 6) << '\n'; // Print out a number evaluated from an expression
    
    cout << "Is it true that 3 + 2 < 5 - 7?\n"; // Print out the statement in quotes
    
    cout << (3 + 2 < 5 - 7) << '\n'; // Print out a bool value evaluated from an expression

    cout << "What is 3 + 2? " << (3 + 2) << '\n'; // Print out a string and a number evaluated from an expression
    cout << "What is 5 - 7? " << (5 - 7) << '\n'; // Print out a string and a number evaluated from an expression

    cout << "Oh, that's why it's false.\n"; // Print out the statement in quotes

    cout << "How about some more.\n"; // Print out the statement in quotes

    cout << "Is it greater? " << (5 > -2) << '\n'; // Print out a string and a bool value evaluated from an expression
    cout << "Is it greater or equal? " << (5 >= -2) << '\n'; // Print out a string and a bool value evaluated from an expression
    cout << "Is it less or equal? " << (5 <= -2) << '\n'; // Print out a string and a bool value evaluated from an expression
}