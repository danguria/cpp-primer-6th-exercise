#include <iostream>
using namespace std;

void print_time(int hour, int minute) {
    cout << "Time: " << hour << ":" << minute << endl;
}

int main() {

    int hour, minute;

    cout << "Enter the number of hours: ";
    cin >> hour;
    
    cout << "Enter the number of minutes: ";
    cin >> minute;

    print_time(hour, minute);

    return 0;
}
