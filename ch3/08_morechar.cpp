// morechar.cpp -- the char type and int type contrasted

#include <iostream>
using namespace std;

int main() {

    char ch = 'M';      // assign ASCII code for M to ch,
                        // 'M' represents the numeric code for the M character
    int i = ch;         // store same code in an int
    cout << "The ASCII code for " << ch << " is " << i << endl;
    
    ch = ch + 1;        // change character code in ch
    i = ch;             // save new charactoer code in i
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // skip followings
    // using the cout.put() member funcion to display a char
    cout << "Displaying char ch using cout.put(i): ";
    cout.put(i) << endl;

    // using cout.put() to display a char constant
    cout.put('!') << endl;
    cout << '$' << endl;
    cout << "Done" << endl;
    return 0;
}
