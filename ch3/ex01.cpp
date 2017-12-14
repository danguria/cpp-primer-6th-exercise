#include <iostream>
using namespace std;

int main() {
    int height_inch;
    cout << "Enter your height in inches : __\b\b";
    cin >> height_inch;

    int h_foot, h_inch;
    
    const int conversion_factor = 12; // 1 foot is 12 inches
    h_foot = height_inch / conversion_factor;
    h_inch = height_inch % conversion_factor;

    cout << "Your height is " << h_foot << " feet " << h_inch << " inches" << endl;
    return 0;
}
