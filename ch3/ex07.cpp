#include <iostream>
using namespace std;

int main() {

    double gas_comsumption_eur;
    cout << "Enter your automobile gasoline consumption figure in liters per 100 kilometers: ";
    cin >> gas_comsumption_eur;

    const double hundredk_to_mile = 62.14;
    const double gallon_to_liter = 3.875;
    cout << gas_comsumption_eur << "/100km = "
        << hundredk_to_mile * (gallon_to_liter / gas_comsumption_eur) << "mpg" << endl;


    return 0;
}
