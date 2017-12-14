#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int foot_to_inch = 12;
    const double inch_to_meter = 0.0254;
    const double pound_to_kilogram = 2.2;

    int h_foot, h_inch, w_pound;

    cout << "Enter your height in feet and inches(seperated by spaces): ";
    cin >> h_foot; cin >> h_inch;

    cout << "Enter your weight in pounds: ";
    cin >> w_pound;

    double h_meter = (h_foot * foot_to_inch + h_inch) * inch_to_meter;
    double w_kilometer = w_pound / pound_to_kilogram;

    double bmi = w_kilometer / sqrt(h_meter);

    cout << "Your BMI is " << bmi << endl;

    return 0;
}
