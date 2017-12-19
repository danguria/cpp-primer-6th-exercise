#include <iostream>
using namespace std;

struct Pizza {
    string company;
    double diameter;
    double weight;
};

int main() {

    Pizza pizza;

    cout << "Enter the company name: ";
    cin >> pizza.company;

    cout << "Enter the diameter: ";
    cin >> pizza.diameter;

    cout << "Enter the weight: ";
    cin >> pizza.weight;

    cout << "company: " << pizza.company << endl;
    cout << "diameter: " << pizza.diameter << endl;
    cout << "weight: " << pizza.weight << endl;

    return 0;
}
