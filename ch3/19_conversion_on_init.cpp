// init.cpp -- type changes on initialization
#include <iostream>
using namespace std;

// back to the cout << 9 / 5 << endl;
// I want to represent 9 / 5 to 1.8, how?
// --> type casting int to double
// --> we'll see it later, now focus on what happening in side
// --> type conversioning
int main() {
    float tree = 3;     // int is converted to float
    int guess(3.9832);  // double converted to int
    int debt = 7.2E12;     // result not defined in c++
    
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    const int code = 66;
    int x = 66;
    char c1 = {31325};    // narrwoing, not allowed
    char c2 = {66};       // allowed becaues char can hold 66
    char c3 = {code};     // ditto
    char c4 = {x};        // not allowed, x is not constant

    x = 31325;
    char c5 = x;        // allowed by this form of initialization

    return 0;
}
