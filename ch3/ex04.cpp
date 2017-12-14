#include <iostream>
using namespace std;

int main() {

    long long input_second;
    cout << "Enter the number of seconds: ";
    cin >> input_second;

    const int second_to_minute = 60;
    const int minute_to_hour = 60;
    const int hour_to_day = 24;

    int day, hour, minute, second;

    day = input_second / second_to_minute / minute_to_hour / hour_to_day;
    hour = (input_second / second_to_minute / minute_to_hour) % hour_to_day;
    minute = (input_second / second_to_minute) % minute_to_hour;
    second = input_second % minute_to_hour;

    cout << input_second << " seconds = "
        << day << " days, "
        << hour << " hours, "
        << minute << " minutes, "
        << second << " seconds" << endl;



    return 0;
}
