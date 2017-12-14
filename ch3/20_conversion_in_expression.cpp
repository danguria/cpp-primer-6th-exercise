#include <iostream>
using namespace std;

int main() {

    short x = 20;
    short y = 35;

    short z = x + y; // x and y are converted to int, the result back to type short
    // because int is computer's most natural type, which means the computer probably does calcaulations fastest for that type.
   

    long l = 40;
    l = l + x; // x is converted to long and result back to long

    // usually converted to bigger size in expression

    // there are complicated type conversion rules,
    // but we don't need to remember them.
    // we should remember when it can be narowwed

    // at least one of operand is large enough to contain the result,
    // that's it.

    // if not, you need to type casting
    // type casting allows you to force type conversios explicitly via the type cast mechanism.


    return 0;
}
