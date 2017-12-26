#include <iostream>
using namespace std;

int* bar() {
    int* ptr1 = new int;
    //int ptr1;
    return ptr1;
}

int* foo() {
    int* ptr2 = bar();
    *ptr2 = 1;
    //int x = 1;
    //*x = 1; // error
    return ptr2;
}


int main() {

    int* ptr3 = foo();
    cout << *ptr3 << endl;
    return 0;
}
