#include <iostream>
#include "list.h"
using namespace std;

void show(Item& i)
{
    cout << i << endl;
}

int main()
{
    Item i1 = 1, i2 = 2, i3 = 3, i4 = 4;
    List l(3);
    l.add(i1);
    l.add(i2);
    l.add(i3);
    l.add(i4);
    l.visit(show);
    return 0;
}
