// divide.cpp -- integer and floating-point division
#include <iostream>
using namespace std;

// what if cout << 9 / 5 << endl; ??
// --> 1 not 1.8
// what if cout << 9 / 0 << endl; ??
// --> compile error , divided by zero, not defined
int main() {

    cout << 9 / 0 << endl;
    cout << "Integer division: 9/5 = " << 9 / 5 << endl;
    cout << "Floating-point division: 9.0 / 5.0 = ";
    cout << 9.0 / 5.0 << endl;

    cout << "Mixed division: 9.0 / 5 = " << 9.0 / 5 << endl;
    

    // int / int
    // long / long
    // double / double
    // float / float

    // go to type conversion and type casting
    return 0;
}
