#include <iostream>
using namespace std;

int& foo(int& x)
{

    int y = 2;
    cout << &y << endl;
    return y;
}

int bar(int& x)
{
    return x;
}

int main()
{

    int x = 1;

    cout << foo(x) << endl;

    return 0;
}
