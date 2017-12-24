#include <iostream>
using namespace std;

void call_by_value(int x, int y) {
    x = 1;
    y = 2;
}

void call_by_referrence(int *x, int *y) {
    *x = 1;
    *y = 2;
}

void print_x(int x) {
    cout << x << endl;
}
int main() {

    int x = 0;
    int y = 0;

    print_x(x);
    call_by_value(x, y);
    cout << "x = " << x << " y = " << y << endl;
    call_by_referrence(&x, &y);
    cout << "x = " << x << " y = " << y << endl;
    
    
    return 0;
}
