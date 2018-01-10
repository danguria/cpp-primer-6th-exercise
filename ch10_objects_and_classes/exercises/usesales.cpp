#include <iostream>
#include "sales.h"
using namespace std;
int main()
{
    using namespace SALES;
    
    double sales[Sales::QUARTERS] = {1.1, 2.2, 3.3, 4.4};
    Sales s1(sales, 4);
    s1.showSales();

    Sales s2;
    s2.showSales();

    /*
    Sales s1;
    double sales[QUARTERS] = {1.1, 2.2, 3.3, 4.4};
    setSales(s1, sales, 4);
    showSales(s1);

    Sales s2;
    setSales(s2);
    showSales(s2);
    */
    return 0;
}
