#include <iostream>
using namespace std;

int main() {
    int l_degree, l_minute, l_second;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    
    cout << "First, enter the degrees: "; 
    cin >> l_degree;

    cout << "Next, enter the minutes of arc: ";
    cin >> l_minute;

    cout << "Finally, enter the seconds of arc: ";
    cin >> l_second;

    const int second_to_minute = 60;
    const int minute_to_degree = 60;

    double latitude_degree = l_degree
        + (l_minute + l_second / (double)second_to_minute) / minute_to_degree;
    cout << l_degree << " degrees, " 
        << l_minute << " minutes, " 
        << l_second << " seconds = " 
        << latitude_degree << " degrees" << endl;


    return 0;
}
