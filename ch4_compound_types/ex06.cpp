#include <iostream>
using namespace std;

struct CandyBar {
    string name;
    double weight;
    int calories;
};

int main() {

    CandyBar snacks[3] = {
        { "Mocha Munch", 2.3, 350 },
        { "Vanilla", 3.2, 400 },
        { "Chocholate", 4.0, 222 }
    };

    cout << "name: " << snacks[0].name << endl;
    cout << "weight: " << snacks[0].weight << endl;
    cout << "calories: " << snacks[0].calories << endl << endl;
    
    cout << "name: " << snacks[1].name << endl;
    cout << "weight: " << snacks[1].weight << endl;
    cout << "calories: " << snacks[1].calories << endl << endl;
   
    cout << "name: " << snacks[2].name << endl;
    cout << "weight: " << snacks[2].weight << endl;
    cout << "calories: " << snacks[2].calories << endl << endl;

    return 0;
}
