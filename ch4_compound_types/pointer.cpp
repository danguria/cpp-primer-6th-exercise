#include <iostream>
using namespace std;


// pointer addition
void add_pointer() {
    double* ptr = new double[3]; // space for 3 doubles
    ptr[0] = 0.2;
    ptr[1] = 0.5;
    ptr[2] = 0.8;

    cout << "value of ptr = " << *ptr << endl;
    ptr = ptr + 1;
    cout << "value of ptr = " << *ptr << endl;
    ptr = ptr + 1;
    cout << "value of ptr = " << *ptr << endl;
    ptr = ptr + 1;
    cout << "value of ptr = " << *ptr << endl;
}

void arraynew() {
    double* ptr = new double[3]; // space for 3 doubles
    ptr[0] = 0.2;
    ptr[1] = 0.5;
    ptr[2] = 0.8;

    cout << "ptr[0] is " << ptr[0] << endl; // *(ptr + 0)
    cout << "ptr[1] is " << ptr[1] << endl; // *(ptr + 1)
    cout << "ptr[2] is " << ptr[2] << endl; // *(ptr + 2)


    cout << "value of ptr = " << *ptr << endl;
    ptr = ptr + 1;
    cout << "value of ptr = " << *ptr << endl;
    ptr = ptr + 1;
    cout << "value of ptr = " << *ptr << endl;
    ptr = ptr + 1;
    cout << "value of ptr = " << *ptr << endl;
}

void becarefull_with_delete() {
    int *p1 = new int;
    int *p2 = p1;

    delete p1;
    delete p2; // what happen?
}

void free_memory_with_delete() {
    int *ptr = new int; // allocate memory with new

    // use the memory
    delete ps; // free memory with delete when done
}

void out_of_memory() {
    while (true) {
        int *ptr = new int[100000000000000];
    }
}

// using the new operator
void use_new() {
    int *ptr = new int; // allocate space for an int
    *ptr = 1001; // store a value there

    cout << "address of ptr = " << ptr << endl;
    cout << "value of ptr = " << *ptr << endl;
    cout << "size of ptr = " << sizeof(ptr) << endl;
}

void pointer_danger() {
    int *ptr;

    //ptr = 12345; // what is this mean?
    ptr = (int*) 1234; // what is it now?

    cout << *ptr << endl; // what happen?

}

// initialize a pointer
void init_ptr() {
    int x = 5;
    int* pt = &x;

    int* px, py; // is py a pointer? or ordinary varieble?
}


// our first pointer vairable
void pointer() {
    int x = 1;
    int* p_x; // declare pointer to an int
    p_x = &x; // assign address of x to pointer

    // express values two ways
    cout << "value of x = " << x << endl;
    cout << "value of x = " << *p_x << endl;

    // exxress address two ways;
    cout << "address of x = " << &x << endl;
    cout << "address of x = " << p_x << endl;

    // use pointer to change value
    *p_x = *p_x + 1;
    cout << "now x is = " << x << endl;
}


// using the & operator to find addresses
void address() {
    // pointer is a variable that store addresses of values rather than the value itself.
    // how to know the address of the variable?
    int x = 1;
    double y = 4.5;

    cout << "x = " << x << endl;
    cout << "memory address of x = " << &x << endl;

    cout << "y = " << y << endl;
    cout << "memory address of y = " << &y << endl;
}

int main() {
    out_of_memory();
    return 0;
}
