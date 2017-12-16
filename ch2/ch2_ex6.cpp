#include <iostream>
using namespace std;

double ly_to_au(double ly) {
    return ly * 63240;
}

int main() {

    double ly;

    cout << "Enter the number of light years: ";
    cin >> ly;


    cout << ly << " light years = " << ly_to_au(ly) << " astronomical units." << endl;
    return 0;
}
