// hexoct1.cpp -- shows hex and octal literals
#include <iostream>
using namespace std;

// computer sees every value as binary,
// but human doesn't.
// C++ provides 3 ways to represnt numbers
// --> decimal, hexadecimal, octal
// --> cout, represent numbers in  demical default
// what if we want to represent numbers in hexa, oxta??
// --> see next example
int main() {
    int chest = 42;     // decimal integer literal
    int waist = 0x42;   // hexadecimal integer literal
    int inseam = 042;   // octal integer literal


    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";

    return 0;
}
