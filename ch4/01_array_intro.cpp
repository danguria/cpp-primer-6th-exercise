#include <iostream>
using namespace std;

// list of same type - array
// list of different type - struct
void foo(int n) {
    int months[n];
}

int main() {

    // typeName arrayName[arraySize];
    int months[12]; // creates array of 12 int
    
    // arraySize must be an integer constant, such as 10 or a const value,
    // that is, compiler should know arraySize at compile time
    // actuall, some compiler can use variable as an arraySize
    // what if we don't know the size of array?? we'll see later on

    // type of array can be anything, int, float, user defined type (class)



    return 0;
}
