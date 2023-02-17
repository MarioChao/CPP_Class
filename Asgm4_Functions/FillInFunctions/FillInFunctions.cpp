#include <iostream>
using namespace std;

void credits();
char randchar();
void counter(int, int);
int abso(int);

int main() {
    srand(time(0));
    // Fill in the function calls where appropriate.

    cout << ("Watch as we demonstrate functions.") << '\n';

    cout << '\n';
    cout << ("I'm going to get a random character from A-Z") << '\n';
    char c = '!';
    c = randchar();
    cout << "The character is: " << c << '\n';

    cout << '\n';
    cout << ("Now let's count from -10 to 10") << '\n';
    int begin, end;
    begin = -10;
    end = 10;
    counter(begin, end);
    cout << ("How was that?") << '\n';

    cout << '\n';
    cout << ("Now we take the absolute value of a number.") << '\n';
    int x, y = 99;
    x = -10;
    y = abso(x);
    cout << "|" << x << "| = " << y << '\n';

    cout << '\n';
    cout << ("That's all.  This program has been brought to you by:") << '\n';
    credits();
}

void credits(  )
// No parameters.
{
    // displays some boilerplate text saying who wrote this program, etc.

    cout << '\n';
    cout << ("programmed by Graham Mitchell") << '\n';
    cout << ("modified by Mario Chao") << '\n';
    cout << ("This code is distributed under the terms of the standard ");
    cout << ("BSD license.  Do with it as you wish.") << '\n';

    // return ??;
}

char randchar(  )
// No parameters.
{
    // chooses a random character in the range "A" to "Z"
    
    int numval;
    char charval;

    // pick a random number from 0 to 25
    numval = (int)(rand()%26);
    // now add that offset to the value of the letter 'A'
    charval = (char) ('A' + numval);

    return charval;
}

void counter( int start, int stop )
// Parameters are:
//     int start;
//     int stop;
{
    // counts from start to stop by ones
    int ctr;

    ctr = start;
    while ( ctr <= stop )
    {
        cout << ctr <<  " ";
        ctr = ctr+1;
    }

    // return ??;
}

int abso( int value )
// Parameters are:
//     int value;
{
    // finds the absolute value of the parameter
    int absval;

    if ( value < 0 )
        absval = -value;
    else
        absval = value;

    return absval;
}