#include <iostream>
using namespace std;

int main() {

    int uncles = 5;     // initialize uncles to 5 - 5 is literal constant
    int aunts = uncles; // initialze aunts to 5
    int chairs = aunts + uncles + 4; // initialze chairs to 14

    int owls = 101;     // traditional C initialization, sets owls to 101
    int wrens(432);     // alternative C++ syntax, set wrens to 432

    short year;         // what could it be?
    year = 1492;        // oh..

    int emuns{7};       // set enums to 7 -> int list[5] = {1, 2, 3, 4, 5};
    int rheas = {12};   // set rheas to 12 -> int list[5]{1, 2, 3,4 , 5};

    int rocs = {};      // set rocs to 0
    int psychics{};     // set psychics to 0
    return 0;
}
