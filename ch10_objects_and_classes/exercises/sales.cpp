#include <iostream>
#include "sales.h"
using namespace std;

namespace SALES
{
    Sales::Sales(const double ar[], int n)
    {
        int i, sum = 0;
        min = INT_MAX;
        max = INT_MIN;
        for (i = 0; i < n; i++) {
            sales[i] = ar[i];
            sum += ar[i];
            if (ar[i] < min)
                min = ar[i];
            if (ar[i] > max)
                max = ar[i];
        }

        for (; i < QUARTERS; i++)
            sales[i] = 0;

        average = sum / n;
    }

    Sales::Sales()
    {
        double sales[QUARTERS];
        for (int i = 0; i < QUARTERS; i++) {
            cout << "enter " << i << "'th sales: ";
            cin >> sales[i];
        }
        *this = Sales(sales, QUARTERS);
    }

    void Sales::showSales() const
    {
        for (int i = 0; i < QUARTERS; i++)
            cout << i << "'th sales: " << sales[i] << endl;
        cout << "average: " << average << endl;
        cout << "max: " << max << endl;
        cout << "min: " << min << endl;
    }

}
/*
namespace SALES
{
    void setSales(Sales& s, const double ar[], int n)
    {
        int i, sum = 0;
        s.min = INT_MAX;
        s.max = INT_MIN;
        for (i = 0; i < n; i++) {
            s.sales[i] = ar[i];
            sum += ar[i];
            if (ar[i] < s.min)
                s.min = ar[i];
            if (ar[i] > s.max)
                s.max = ar[i];
        }

        for (; i < QUARTERS; i++)
            s.sales[i] = 0;

        s.average = sum / n;
    }

    void setSales(Sales& s)
    {
        double sales[QUARTERS];
        for (int i = 0; i < QUARTERS; i++) {
            cout << "enter " << i << "'th sales: ";
            cin >> sales[i];
        }
        setSales(s, sales, QUARTERS);
    }

    void showSales(const Sales& s)
    {
        for (int i = 0; i < QUARTERS; i++)
            cout << i << "'th sales: " << s.sales[i] << endl;
        cout << "average: " << s.average << endl;
        cout << "max: " << s.max << endl;
        cout << "min: " << s.min << endl;
    }

}
*/
