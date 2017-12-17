#include <iostream>
using namespace std;

struct CandyBar {
    string name;
    double weight;
    int calories;
};

int main() {

    CandyBar snack = { "mocha Munch", 2.3, 350 };

    cout << "name: " << snack.name << endl;
    cout << "weight: " << snack.weight << endl;
    cout << "calories: " << snack.calories << endl;

    return 0;
}
