// bondini.cpp -- using escape sequences

#include <iostream>
using namespace std;

int main() {
    cout << "\aOperationg \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:____\b\b\b\b";

    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";

    return 0;
}
