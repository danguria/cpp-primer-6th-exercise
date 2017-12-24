
#include <iostream>
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

point2D rotate_point2D(int x, int y) {
    point2D point; 

    point.x = 4;
    point.y = 1;
 
    // how about caller??? let him code it
    return point;
}

??? rotate_point2D(int x1, string y1) {
    int rx, ry;
    string str;
    // ... there are some operations here

    return rx, str; // how to return more than one variables????
}

void struct_declaration() {


    struct student 
    {
        string name;
        int birth_year;
        int id;
    };



    int x;
    struct student sk;

    sk.name = "kim";
    sk.birth_year= 2000;
    sk.id = 100;

    cout << sk.name << endl;


    student tk = { "tae", 2000, 100 };  // be carefull ordering
}

int main() {
    return 0;
}
