// limits.cpp -- some integer limits
#include <iostream>
#include <climits>

// We have learned number system in math
// --> natural number(1, 2, 3, ...) < whole number(0, 1, 2, ..) < integer (-2, -1, 0, 1, 2) < rational number (-2, -2/3, 0, 1, 2/3, 2)
// --> computer handles from natural to rational number
// where a variable located in?
// --> RAM, every thing is represented by binary 
// what types of integers does C++ have?
// --> (unsigned) integer and floating point
// --> integers are divided into 5 different types and each has different size
// --> char(1byte), short, int(4byte), long, long long
// --> bytes = usually 8bits
// --> we'll see char later on
int main() {
    using namespace std;

    int n_int = INT_MAX;         // initialize n_int to max int value
    short n_short = SHRT_MAX;    // symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;


    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof (int) << " bytes." << endl; // can not be sizeof int
    cout << "short is " << sizeof n_short << " bytes." << endl; // can be sizeof (n_short)
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return 0;
}
