#include <iostream>
#include "golf.h"
using namespace std;

int main()
{
    Golf g1("g1", 1);
    g1.showgolf();

    Golf g2;
    g2.showgolf();
    g2.handicap(0);
    g2.showgolf();
    /*
    golf g1;
    setgolf(g1, "g1", 1);
    showgolf(g1);

    golf g2;
    cout << setgolf(g2) << endl;
    showgolf(g2);
    handicap(g2, 0);
    showgolf(g2);
    */
    return 0;
}
