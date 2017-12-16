#include <iostream>
using namespace std;

void foo() { cout << "Three blind mice" << endl; }
void bar() { cout << "See how they run" << endl; }

int main() {

    foo();
    foo();

    bar();
    bar();

    return 0;
}
