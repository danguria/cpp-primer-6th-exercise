// precedence and associativity
#include <iostream>
using namespace std;

// C++ has same precedence with math
int main() {


    int x = 3 + 4 * 5; // 35 or 23?

    float y = 120 / 4 * 5; // 150 or 6?

    // use parenthesis when you are confused
    float z = (x + y) / 2; // x + y / 2;
    return 0;
}
