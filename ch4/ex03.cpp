#include <iostream>
#include <cstring>
using namespace std;

int main() {

    const int size_name = 128;
    
    cout << "Enter your first name: ";
    char first_name[size_name];
    cin >> first_name;

    cout << "Enter your last name: ";
    char last_name[size_name];
    cin >> last_name;

    char full_name[size_name];
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here's the information in a single string: " << full_name << endl;
    return 0;
}
