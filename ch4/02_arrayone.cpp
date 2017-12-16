// arrayone.cpp -- small arrays of integers
#include <iostream>
using namespace std;


// how to acces to the array?
// --> using [idx]
int main() {

    int yams[3];        // creates array with three elements
    yams[0] = 7;        // assign value to first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // create, initialize array

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";

    // what if yams[3] ???
    // --> unknown behavior
    // --> the compiler does not check to see if you use a valid subscript


    // what if we should assign some values to big array like int yams[1000000];
    // --> using loop, we'll see later on
    return 0;
}
