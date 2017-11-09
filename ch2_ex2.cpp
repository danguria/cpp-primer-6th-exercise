#include <iostream>
using namespace std;

int main() {

    // 1 furlong is 220 yards
    int furlong, yards;

    cout << "enter distance in furlong: ";
    cin >> furlong;

    yards = 220 * furlong;
    cout << furlong << " forlong(s) is(are) "
        << yards << " in yards" << endl;

    return 0;
}
