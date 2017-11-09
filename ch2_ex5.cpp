#include <iostream>
using namespace std;

// T(°F) = T(°C) × 9/5 + 32
double celsius_to_fahrenheit(double celisus) {
    return 1.8 * celisus + 32;
}

int main() {

    double celsius;

    cout << "Please enter a Celsius value: ";
    cin >> celsius;

    cout << celsius << " degrees Celsius is " 
        << celsius_to_fahrenheit(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}
