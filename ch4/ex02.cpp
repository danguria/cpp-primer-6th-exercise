#include <iostream>
using namespace std;

int main() {

    cout << "What is your first name? ";
    string first_name;
    getline(cin, first_name);
    
    cout << "What is your last name? ";
    string last_name;
    cin >> last_name;

    cout << "What letter grade do you deserve? ";
    char letter_grade;
    cin >> letter_grade;

    cout << "What is your age? ";
    int age;
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << (char)(letter_grade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}
