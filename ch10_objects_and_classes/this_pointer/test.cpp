#include <iostream>
using namespace std;


// stetp1
int* topval(int* t, int* s)
{
    if (*t < *s)
        return s;
    else 
        return t;
}


class Stock
{

    public:
        int total_val;
        Stock(int total_val)
        {
            this->total_val = total_val;
        }

        Stock* Stock::topval(Stock *t, Stock* s)
        {
            if (t->total_val < s->total_val)
                return s;
            else 
                return t;
        }
        
        Stock* topval(Stock* s)
        {
            if (this->total_val < s->total_val)
                return s;
            else 
                return this;
        }
};

int main() {

    /* step1
    int stocks[4] = {1, 2, 3, 4};

    int* top = &stocks[0];

    for (int i = 1; i < 4; i++) {
        top = topval(top, &stocks[i]);
    }

    cout << *top << endl;
    */

    // step2
    Stock stocks[4] = { Stock(1), Stock(2), Stock(3), Stock(4) };

    Stock* top = &stocks[0];
    for (int i = 1; i < 4; i++) {
        //top = top->topval(&stocks[i]);
        top = top->topval(top, &stocks[i]);
    }

    cout << top->total_val << endl;
    

    return 0;
}
