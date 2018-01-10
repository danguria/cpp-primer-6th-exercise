#include <iostream>
#include "plorg.h"

int main()
{
    Plorg p1(1);
    p1.show();
    p1.set_ci(3);
    p1.show();
    
    Plorg p2(2, "p2");
    p2.show();
    p2.set_ci(4);
    p2.show();
    
    return 0;
}
