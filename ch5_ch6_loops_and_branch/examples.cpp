#include <iostream>
using namespace std;


// see the chapter review 2, 3, 4, 5, 6,
// exercise 1, 3, 4, 8, 10


void nested_loop() {
    int matrix[2][2] = 
    {
        {1, 2},
        {3, 4}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}


void variable_scope() {
    while (1) {
        cout << "Your turn, enter a position : ";
        int position;
        cin >> position;

        cout << "you chose the position " << position << endl;
    }

    //cout << "your last choice was " << position << endl; // error
}


void infinite_loop() {
    while (1) {
        cout << "Your turn, enter a position : ";
        int position;
        cin >> position;

        cout << "you chose the position " << position << endl;
    }
}

int factorial(int n) {

    int fac = 1;
    for (int i = 1; i <= n; i++) {
        fac = fac * n;
    }

    return fac;
}

void sum_with_forloop() {
    // i : loop variable
    // terminal condition
    // update loop variable
    int sum = 0; 
    for (int i = 0; i < 10; i++) // i = i + 1
        sum += 1;

    cout << "sum : " << sum << endl;





    int x = 1;
    int y = x++ + 1;
    int z = ++x + 1;
}

void sum_with_whileloop() {
   
    int sum = 0; 
    
    int from = 0;
    int to = 10;
    
    int i = from;

    while (i < to) {
        sum = sum + i;
        i = i + 1;
    }
    
    // { statements; } --> compound statements

    cout << "sum : " << sum << endl;
}

void whileloop_basic() {

    int cnt = 5;
    while (cnt > 0) 
    {
        cout << "hi" << endl;
        cnt = cnt - 1;
    }
}

void boolean_expression() {
    // ==, <, >, <=, >=,
    // ! (not)
    
    
    // &&(AND), ||(OR)

    int x = 1;
    int y = 2;

    if (true) {
        // do something
    } else {

    }


    if (false) { // if ( 3 > 4) {
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }


    if (x == y) { // then
        cout << "x equals to y" << endl;
    } else { // otherwise
        cout << "x and y are different" << endl;
    }

    // x = 1 y = 2
    if (x > y) {
        // ...
        cout << "1";
    } else if ( x < y) {
        cout << "2";
    } else {  // x == y
        cout << "3";
    }

    char ch;

    if ( ch == 'a') {
    } else if (ch == 'b') {
    } else if (ch == 'c') {
    } else {
    }

    if (x >= y) {
        // 
    } else { // x < y
        // 
    }

    if (x < y) {
        // 
    } else { // x >= y
    }

    if (x > y || x == y) { // y <= x
        // ...
    } else { // ??? // y > x
    }

    // 1, -2
    if (x > 0 && y > 0) {
        // ...
    } else { // x <= 0 || y <= 0
        // ...
    }

    if (!(x < y)) { // x >= y
    } else { // x < y
    }

    // false : 0
    // true : other numbers
    if (x = 1) { // if (x) --> if (1) --> if (true)
        // 1
    } else {
        // 2
    }


    // compound statement
    // x = 1, y = 2
    if (x == y)
        cout << "x equals to y" << endl;
    else
        cout << "x and y are different" << endl;
        cout << "x = " << x;
        cout << "y = " << y;

    // variable scope
    int x = 1;
    int y = 1;
    int z;
    if (x == y) 
    {
        z = x + y;
    }
    
    cout << "x + y = " << z << endl; // ??
    

    bool is_there_line;
    // ... let's say there are some codes for checking if there is a line

    //is_there_line = false;
    // is_there_line = true;

    // if (boolean expression)
    if (is_there_line) {
        cout << "you win" << endl;
        // terminate program or ask user to start over
    } else {
        // turn over
    }
}

int main() 
{
    int x;
    x = 1;

    x = x + 1;
    return 0;
}
