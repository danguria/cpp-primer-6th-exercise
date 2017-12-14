#include <iostream>
using namespace std;

// what if we want to represent ' or " in string???
// use '\' which is called escape sequence
// we have \a \" \' \/ \n \t \b ...
// actually, escape sequences can be converted to number so that compter unerstand
int main() {

    char alarm = '\a';
    cout << alarm << "Don't do that again!\a\n";
    cout << "Ben \"Buggsie\" Hacker\nwas here!\n";
    cout << endl; // using the endl manipulator
    cout << '\n'; // using a character constant
    cout << "\n"; // using a string


    return 0;
}
