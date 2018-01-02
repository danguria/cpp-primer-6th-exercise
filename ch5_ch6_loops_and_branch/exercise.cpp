#include <iostream>
using namespace std;

void temp() {
    int arr[5]; // int*

}



void keyboardCallback() {
    cout << "hi" << endl;
}

int factorial(int x) {
    if (x > 1) {
        return x * factorial(x-1);
    } else if (x == 1) {
        return x;
    } else {
        // invalid input
    }
}

int iterative_factorial(int x) {
    int answer = 1;
    for (int i = 1; i <= x; i++) {
        answer = answer * i;
    }
    return answer;
}



void ex1_forloop() {
    int sum = 0;
    for (int cnt = 1; cnt <= 10; cnt++) { 
        sum += cnt;
    }

    cout << "sum = " << sum << endl;
    // sum??
    // loop1 : sum(??) + 1 => sum
}

void ex1_whileloop() {

    int from = 1, to = 10;
    int sum = 0;
    int cnt = from; // loop variable
    while (cnt <= to) { // loop condition(terminal condition)
        sum += cnt;
        cnt++;  // loop variable modification
    }

    // loop1 : 0 + 1 => sum
    // loop2 : 1 + 2 => sum
    // loop3 : 3 + 3 => sum(6)
    // loop4 : 6 + 4 => sum(10)
    // ...
    // loop10: 45 + 10 => sum(55)

    cout << "sum = " << sum << endl;
}

void ex3() {
    int input;
    int sum = 0;
    cout << "enter number: ";
    cin >> input;
    sum += input;
    while (input != 0) {
        cout << "enter number: ";
        cin >> input;
        sum += input;
    }

    cout << "sum = " << sum << endl;
}

void ex4() {
    double original_balance_daphne = 100;
    double current_balance_daphne = original_balance_daphne;
    double interest_daphne;
    double rate_daphne = 0.1;

    double balance_cleo = 100;
    double interest_cleo;
    double rate_cleo = 0.05;

    int year = 0;
    while (current_balance_daphne <= balance_cleo) {
        current_balance_daphne += rate_daphne * original_balance_daphne;
        balance_cleo += rate_cleo * balance_cleo;

        cout << current_balance_daphne << ", " << balance_cleo << endl;
        year++;
    }

    cout << year << "'s after" << endl;
}

void ex8() {
    const int size_word = 128;
    char word[size_word];
    int wc = 0;
    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> word;
    while (strcmp(word, "done") != 0) {
        wc++;
        cin >> word;
    }

    cout << "You entered a total of " << wc << " words." << endl;
}

void ex10() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
}

#include <opengl>
/// GL source code
void glutKeyboardFunc(void (*pf)(unsigned char, int, int)) { // int*
    // ...
    // drawing ...
    // shading ...
    // keyboard handling

    cin >> key >> x >> y;
    (*pf)(key, x, y); // keyboardCallback(key, x, y);
    // ..
}


void draw_board(char* arr) { // arr = board;
    cout << arr[0] << endl;
} 
int main() {
    glutKeyboardFunc(keyboardCallback);
    char board[9] = "123456789";
    draw_board(board);
}
