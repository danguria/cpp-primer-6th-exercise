// arith.cpp -- some C++ arithmetic
#include <iostream>
using namespace std;

// so far, we've learned about integer and floating-point numbers
// now, we'are gonna see operators for them
// --> +, -, *, / %
int main() {
    float x, y;

    cout << "Enter a number: ";
    cin >> x;

    cout << "Enter another number: ";
    cin >> y;

    cout << "x = " << x << "; y = " << y << endl;
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;

    return 0;
}
