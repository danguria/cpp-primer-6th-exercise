#include <iostream>
using namespace std;

in main() {

    struct point {
        int x;
        int y;
    };

    point p = {1, 2};
    point* pp = &p;

    cout << p.x << endl;
    cout << p.y << endl;
    cout << (*pp).x << endl;
    cout << pp->x << endl;


    int x = 1;
    int* px = &x;
    cout << x << endl;
    cout << *px << endl;

    return 0;
}
