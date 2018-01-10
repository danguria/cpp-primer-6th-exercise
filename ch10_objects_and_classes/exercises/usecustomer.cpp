
#include <iostream>
#include "../abstract_data_type/stack.h"
using namespace std;

int main()
{
    Stack s;
    double total = 0;
    customer c1 = {"sk", 123};
    s.push(c1);

    customer c2 = {"tk", 321};
    s.push(c2);


    customer c;
    if (s.pop(c)) {
        total += c.payment;
    }
    cout << "total: " << total << endl;

    if (s.pop(c)) {
        total += c.payment;
    }
    cout << "total: " << total << endl;


    return 0;
}
