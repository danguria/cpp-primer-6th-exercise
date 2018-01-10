#include <iostream>
#include "move.h"
using namespace std;

Move::Move(double a, double b)
{
    x = a; y = b;
}

void Move::showmove() const
{
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
}

// this function adds x of m to x of invoking object to get new x,
// add y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
Move Move::add(const Move& m)
{
    x += m.x;
    y += m.y;
    return Move(x, y);
}

void Move::reset(double a, double b)
{
    x = a; y = b;
}// resets x, y to a, b
