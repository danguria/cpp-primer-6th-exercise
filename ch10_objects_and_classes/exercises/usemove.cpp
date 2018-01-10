#include <iostream>
#include "move.h"
using namespace std;

int main()
{
    Move m(1, 1);
    m.showmove();

    m.add(Move(2, 1));
    m.showmove();

    m.reset();
    m.showmove();
    return 0;
}
