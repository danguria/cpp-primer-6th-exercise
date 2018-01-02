#include <iostream>
using namespace std;


char* getname() {
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char* pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}

// using the delete operator
void delete_ex() {
    char* name;
    
    name = getname();
    cout << name << " at " << (int*) name << endl;
    delete [] name;

    name = getname();
    cout << name << " at " << (int*) name << endl;
    delete [] name;

}

// using new with a structure
void newstruct() {
    struct inflatable
    {
        char name[20];
        float volume;
        double price;
    };

    inflatable* ps = new inflatable;
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;
    cout << "Enter price: $:";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " cubic feet" << endl;
    cout << "Price: $" << ps->price << endl;
    delete ps;
}

// using pointers to string
void pointer_string() {

    char animal[20] = "bear";   // animal holds bear
    const char* bird = "wren";  // bird holds address of string
    char* ps;                 // uninitialized

    cout << animal << " and " << bird << endl;
    // cout << ps << endl; // may display garbage, may cause a crash

    cout << "Enter a kind of animal: ";
    cin >> animal;  // ok if inpu < 20 characters
    // cin >> ps    // runtime error, ps doesn't point to allocated space

    ps = animal;    // set ps to point to string
    cout << ps << endl; // display same string of animal;

    cout << "Before using strcpy()" << endl;
    cout << animal << " at " << (int*)animal << endl;
    cout << ps << " at " << (int*)ps << endl;

    ps = new char[strlen(animal) + 1]; // get new memory
    strcpy(ps, animal); // copy string to new memory

    cout << "After using strcpy()" << endl;
    cout << animal << " at " << (int*)animal << endl;
    cout << ps << " at " << (int*)ps << endl;

    delete [] ps;

}

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
    ptr = ptr + 2;
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

    *ptr = 1;
    cout << "before delete" << endl;
    cout << *ptr << endl;
    
    
    cout << "after delete" << endl;
    // use the memory
    delete ptr; // free memory with delete when done
    cout << *ptr << endl;
}

void out_of_memory() {
    while (true) {
        int *ptr = new int[100000000000000];
    }
}

// using the new operator
void use_new() {
    int x;
    int* ptr = new int; // allocate space for an int
        
    *ptr = 1001; // store a value there

    cout << "address of ptr = " << ptr << endl; 
    cout << "value of ptr = " << *ptr << endl;
    cout << "size of ptr = " << sizeof(ptr) << endl;
}

void pointer_danger() {
    int *ptr;

    //ptr = 12345; // what is this mean?
    ptr = (int*)1234; // what is it now?

    cout << *ptr << endl; // what happen?
}

// initialize a pointer
void init_ptr() {
    int x = 5;
    int* pt = &x;

    int* px, py; // is py a pointer? or ordinary variable?
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

    free_memory_with_delete();
    return 0;
}
