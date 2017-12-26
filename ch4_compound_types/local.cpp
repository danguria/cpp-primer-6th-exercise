#include <iostream>
using namespace std;

int* bar() {
    int local_variable;
    return &local_variable;
}

int func() {
    int x = 2;
    return x;
}

int* foo() {
    //int local_variable;
    //int* ptr2 = &local_variable;
    int* ptr2 = bar();  
    *ptr2 = 1;
    func();
    return ptr2;
}


int main() {

    int* ptr3 = foo();
    cout << *ptr3 << endl;
    return 0;
}
