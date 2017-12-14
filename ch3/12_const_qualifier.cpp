#include <iostream>
using namespace std;

#define YEAR_OF_BIRTH 2000

// symbolic constant
// --> #define, const
// literal constant 
// --> 2, 3, 1.1, 'c'

// should be initialized when it's declared
// cannot be modified
int main() {

    const int Year_of_birth = 2000;   //Year_of_birth is symbolic constant for 2000
   Year_of_birth = 1990; // compile error
    int this_year = 2018;


    if (YEAR_OF_BIRTH > this_year)
        cout << "year of birth never be larger than this year" << endl;

    if (YEAR_OF_BIRTH < 0)
        cout << "year of birth never be negative number" << endl;
    
    if (YEAR_OF_BIRTH < 2000)
        cout << "you are an old man!" << endl;


    // what if we need to change the value of 2000
    return 0;
}

// const is better than #define
// why?
// 1. it lets you specify the type explicitly.
// 2. you can use C++'s scoping rules to limit the definition
//    to particular functions or files
// 3. you can use const with more elaborate types, such as
//    arrays and structures
