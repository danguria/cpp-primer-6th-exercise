// chartype.cpp -- the char type

#include <iostream>
using namespace std;

// computer doens't know about characters, only knows binaries
// how to computer remember characters??
// --> mapping table... commonly ASCII code is widely used.
// cin convert "M" to 77, cout convert 77 to "M"
int main() {
    char ch;        // declare a char variable

    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;

    return 0;
}
