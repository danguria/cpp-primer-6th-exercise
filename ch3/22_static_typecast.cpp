#include <iostream>
using namespace std;

int main() {

    int x, y, z;

    // the following statement adds the values as double,
    // then converts the result to int
    x = 19.99 + 11.99;

    // these statements add values as int
    y = (int)19.99 + (int)11.99; // old c syntax
    z = int(19.99) + int(11.99); // new C++ syntax
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is "; // print as char
    cout << int(ch) << endl;                // print as int
    // skip following
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl; // using static_cast

    return 0;
}
