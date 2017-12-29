
#include <iostream>
using namespace std;
void ex01() {
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

}
void ex02() {

    cout << "What is your first name? ";
    string first_name;
    getline(cin, first_name);
    //cin.getline(first_name, 100); 

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

}
void ex03() {

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
}
void ex04() {
    cout << "Enter your first name: ";
    string first_name;
    cin >> first_name;

    cout << "Enter your last name: ";
    string last_name;
    cin >> last_name;

    string full_name = last_name + ", " + first_name;
    cout << "Here's the information in a single string: " << full_name << endl;
}
void ex05() {
    struct CandyBar {
        string name;
        double weight;
        int calories;
    };
    CandyBar snack = { "mocha Munch", 2.3, 350 };


    cout << "name: " << snack.name << endl;
    cout << "weight: " << snack.weight << endl;
    cout << "calories: " << snack.calories << endl;
}
void ex06() {
    struct CandyBar {
        string name;
        double weight;
        int calories;
    };

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

}

void ex07() {
    struct Pizza {
        string company;
        double diameter;
        double weight;
    };

    Pizza pizza;

    cout << "Enter the company name: ";
    cin >> pizza.company;
    // getline(cin, pizza.company);
    // cin.getline(pizza.company, 20);

    cout << "Enter the diameter: ";
    cin >> pizza.diameter;

    cout << "Enter the weight: ";
    cin >> pizza.weight;

    cout << "company: " << pizza.company << endl;
    cout << "diameter: " << pizza.diameter << endl;
    cout << "weight: " << pizza.weight << endl;
}

void ex08() {
    struct Pizza {
        string company;
        double diameter;
        double weight;
    };

    Pizza *pizza = new Pizza;

    cout << "Enter the diameter: ";
    cin >> pizza->diameter;

    cout << "Enter the company name: ";
    cin >> pizza->company;
    // getline(cin, pizza.company);
    // cin.getline(pizza.company, 20);

    cout << "Enter the weight: ";
    cin >> pizza->weight;

    cout << "company: " << pizza->company << endl;
    cout << "diameter: " << pizza->diameter << endl;
    cout << "weight: " << pizza->weight << endl;
}

void ex09() {
    struct CandyBar {
        string name;
        double weight;
        int calories;
    };

    CandyBar *snacks = new CandyBar[3];
    snacks[0].name = "Mocha Munch";
    snacks[0].weight = 2.3;
    snacks[0].calories = 350;
    snacks[1].name = "Vanilla";
    snacks[1].weight = 3.2;
    snacks[1].calories = 400;
    snacks[2].name = "Chocholate";
    snacks[2].weight = 4.0;
    snacks[2].calories = 222;

    cout << "name: " << snacks[0].name << endl;
    cout << "weight: " << snacks[0].weight << endl;
    cout << "calories: " << snacks[0].calories << endl << endl;

    cout << "name: " << snacks[1].name << endl;
    cout << "weight: " << snacks[1].weight << endl;
    cout << "calories: " << snacks[1].calories << endl << endl;

    cout << "name: " << snacks[2].name << endl;
    cout << "weight: " << snacks[2].weight << endl;
    cout << "calories: " << snacks[2].calories << endl << endl;

}

void ex10() {
    double array[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter 40-yd dash of " << i + 1 << " : ";
        cin >> array[i];
    }

    double sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += array[i];
    }

    cout << "average : " << sum / 3 << endl;
}

int main() {
    ex10();
    return 0;
}
