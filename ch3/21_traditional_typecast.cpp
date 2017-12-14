#include <iostream>
using namespace std;

// now, we can represent 9 / 5 to 1.8
// --> (double)9 / 5
int main() {
    // generally, there's two way of type casting
    int x = 1;
    // (long) x; // straight C
    // long (x); // pure C++

    // (typeName) value
    // typeName (value)

    // type cast doesn't alter the x variable itself; instead, it creates a new value of the indicated type, which you can then use in an expression, as in the following;

    cout << (int) 'Q' << endl; // displays the integer code for 'Q'

    // there are 4 type cast operators that are more restrictive in how they can be used. It will be discussed on chapter 15.

    // here, just look at static_cast<typeName> (value)


    int auks, bats, coots;

    return 0;
}
