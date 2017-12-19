#include <iostream>
using namespace std;

int main() {
    const int size_name = 128;

    cout << "What is your first name? ";
    char first_name[128];
    cin.getline(first_name, size_name);
    
    cout << "What is your last name? ";
    char last_name[128];
    cin.getline(last_name, size_name);

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
