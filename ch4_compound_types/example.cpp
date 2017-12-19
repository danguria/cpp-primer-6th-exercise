#include <iostream>
#include <cstring> // for strlen
#include <string> // for string class
using namespace std;

void array_of_structure() {
    
    struct student {
        string name;
        int id;
    };

    student stds [3] = {
        { "kim", 1 },
        { "lee", 2 }
    };

    cout << stds[0].name << endl;
    cout << stds[0].id << endl;
    cout << stds[1].name << endl;
    cout << stds[1].id << endl;
    cout << stds[2].name << endl;
    cout << stds[2].id << endl;
}

struct point2D {
    int x;
    int y;
};

struct point2D rotate_point2D(int x, int y) {
    struct point2D point; 

    point.x = 4;
    point.y = 1;
 
    // how about caller??? let him code it
    return point;
}

/*
???? rotate_point2D(int x, int y) {
    int rx, ry;
    // ... there are some operations here

    return rx, ry; // how to return more than one variables????
}
*/

void struct_declaration() {
    struct student {
        string name;
        int birth_year;
        int id;
    };

    struct student sk;
    sk.name = "kim";
    sk.birth_year= 2000;
    sk.id = 100;

    student tk = { "tae", 2000, 100 };  // be carefull ordering
}

void assignment_concatenation_appending() {
    char str1[] = "str1";
    char str2[20];
    //str2 = str1; // error

    string str3 = "str3";
    string str4;
    str4 = str3;  // ok, why? now, just believe... we'll see opeartor overloaing later on

   
    string str5;
    str5 = str4 + str3; // ok, concatenation
    
    string str6 = "I am ";
    str6 = str6 + " good";
}


void stringclass() {
    // C++ sytle string -- using string class

    string str1;
    string str2 = "panther";
    string str3 = {"danguria"};
    string str4 {"hello"};
    string str5("hi, there");

    cout << "Enter your name: ";
    cin >> str1;

    cout << str1[0] << endl; // ???, this is class... we know str1.function_name or str1.variable_name

}

void get_string_from_cin_getline() {
    const int size = 20;
    char name[size];
    char dessert[size];

    cout << "Enter your full name: " << endl;
    cin.getline(name, size);
    
    cout << "Enter your favorite deseert: " << endl;
    cin.getline(dessert, size);
   
    cout << name << " likes " << dessert << endl;


}

void get_string_from_cin() {
    const int size = 20;
    char name[size];
    char dessert[size];

    cout << "Enter your full name: " << endl;
    cin >> name;
    cout << "Enter your favorite deseert: " << endl;
    cin >> dessert;

    cout << name << " likes " << dessert << endl;


}

void string_size() {
    const int size = 15;

    char name1[size]; 
    char name2[size] = "sungkeun";

    cout << "what's your first name?" << endl;
    cin >> name1; // what if input size of str is equal or larger than 15?
    cout << "hi " << name1 << ", your name has " << strlen(name1) << " letters" << endl;
    cout << "and it is sotred in an array of " << sizeof(name1) << " bytes." << endl;

   
    cout << "Your initial is " << name1[0] << endl;

    name2[3] = '\0';
    cout << name2 << endl; // ? --> sun\0keun\0


}

void strings() {

    char str2[] = {'E', 'n', 't', 'e', 'r', '\0'}; // \n
    char str3[] = "E";
    cin >> str3; // andy -> an? a\0

    
    cout << str3[0] << str3[1] << str3[2] << str3[3]<< endl;
    cout << str3 << endl;

    char str4[100];  // andy
    cin >> str4;
    cout << str4 << endl;

    char str5[] = "hi";
    char str6[] = "taekyoon";
    

    // C-style string -- using array of char must end with '\0' null character
    //char str1[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', "I" }; // error, not a string
    //char str2[8] = { 'f', 'a', 't', 'e', 's', 's', 'a', '\0' }; // a string!
   
    //char str3[11] = "Mr. Cheeps"; // the \0 is understood
    char str4[] = "Bubbles";      // let the compiler count

    char str5[8] = "bozo";          // b o z o \0 \0 \0 \0

    //char str6 = "s"; // illegal type mismatch
    
    // C++-style string -- using class string

    string str10;
    char str11[] = "test"; // { 't', 'e', 's', 't' , '\0' }
   

    string str10 = "test1"; // x
    string str11("test2");

    string str12;

    str12 = str10 + str11; // test1test2
    str12 = str10 - str11; // error
    str12[0]; // t
    str12[0] = 'a'; // aest1test2



    char str[] = "test1";
    char str2[] = "test2 test3";
    str + str2; // test1test2 test3

    int x = 1;
}

void array_init() {
    // how to initialize values in an array?
    // how to write value to a variable and read value from the variable?

    int arr1[3] = { 90, 96, 80 }; 


    arr1[0] = 9;
    arr1[1] = 6;
    arr1[2] = 0;
    //arr1[3] = { 10, 20, 30 }; // ??

    int arr2[3] = { 10, 20, 30};
    //arr1 = arr2; // ??--> error , not allowed


    int arr3[500] = {0};  // every element in the array is initialized as zero.
    int arr4[500] = {1};  // {1, 0, 0, 0, ..., 0}
    int arr5[500] = {1, 2, 3, 4}; // {1, 2, 3, 4,, 0, 0, 0, }
    //int arr6[] = {1, 2, 3, 4}; // {1, 2, 3, 4}

    int arr[4] { 1, 2, 3, 4}; // C++11

    //int arr6[] = {25, 92, 3.0}; // error, because narrowing is banned
    //char arr7 = {'h', 'i', 1};  // error
}
void intro(int n) {
    // typeName arrayName[arraySize];
    int months[14]; // creates array of 12 int
    char arr[13];
    long arr2[13];
    //..

    float arr4[44];



    // arraySize must be an integer constant, such as 10 or a const value,
    // that is, compiler should know arraySize at compile time
    // actually, some compiler can use variable as an arraySize
    // what if we don't know the size of array?? we'll see "new" keyword later on

    // type of array can be anything, int, float, user defined type (class)

    // list of same type - array
    // list of different type - struct

}

int main() {

    // array  - a list of variables with same types
    // string  - special list of character variables
    // structure - a list of variables with differenct types

    strings();
    //get_string_from_cin_getline();

    return 0;
}
