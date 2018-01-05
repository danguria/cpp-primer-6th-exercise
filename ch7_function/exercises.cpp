#include <iostream>
using namespace std;


double harmonic_mean(double x, double y) {
    return 2.0 * x * y / (x + y);
}

void ex01() {
    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    while (x != 0 && y != 0) {

        cout << "Harmonic mean of two numbers: " << harmonic_mean(x, y) << endl;
    
        cout << "Enter two numbers: ";
        cin >> x >> y;
    }
}

int get_scores(double scores[], int max_size) {
    int size = 0;
    double score;
   
    while (score != -1 && size < max_size) {
        cout << "Enter golf score (-1 to exit): ";
        cin >> score;
        scores[size++] = score;
    }

    return size;
}

double average_score(double scores[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) sum += scores[i];
    return sum / size;
}
void display_scores(double scores[], int size) {
    for (int i = 0; i < size; i++) cout << scores[i] << " ";
    cout << endl;
}

void ex02() {
    const int max_size = 10;
    double scores[max_size];

    int size = get_scores(scores, max_size);
    display_scores(scores, size);
    cout << "average score: " << average_score(scores, size) << endl;
}

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void ex03_a(box b) {
    cout << b.maker << endl;
    cout << b.height << endl;
    cout << b.width << endl;
    cout << b.length << endl;
    cout << b.volume << endl;
}

void ex03_b(box* b) {
    b->volume = b->height * b->width * b->length;
}

void ex03_c() {
    box b = { "company", 2.2, 3.3, 4.4 };
    ex03_a(b);
    ex03_b(&b);
    cout << "volume: " << b.volume << endl;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}

void ex04() {
    cout << "probability : " << probability(47, 5) * probability(27, 1) << endl;
}

int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) 
        sum += i;
    return sum;
}

int factorial(const int num) {
    if (num == 1) return num;
    return num * factorial(num - 1);
}



void ex05() {
    int n;
    cout << "Enter number(negative number or zer to exit) : ";
    cin >> n;

    while (n > 0) {
        cout << "Factorial number of " << n << " is " << factorial(n) << endl;
    
        cout << "Enter number(negative number or zer to exit) : ";
        cin >> n;
    }
}

bool is_numeric(double value) { return true; }

int Fill_array(double arr[], int total_size) {

    int size = 0;

    double value;

    while (size < total_size && is_numeric(value)) {
    
        cout << "Enter a number(non-numeria number to exit) : ";
        cin >> value;
        arr[size++] = value;
    }

    return size;
}

void Show_array(const double arr[], int size) {
    for (int i = 0; i < size; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

void Reverse_array(double arr[], int size) {
    int i = 0, j = size - 1;
    while (i < j) {
        double temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void ex06() {
    const int total_size = 10;
    double arr[total_size];

    int size = Fill_array(arr, total_size);
    Show_array(arr, size);
    Reverse_array(arr, size);
    Show_array(arr, size);
    Reverse_array(arr + 1, size - 2);
    Show_array(arr, size);
}

double* fill_array(double arr[], int limit) {
    double temp;
    int i;
    for (i = 0; i < limit; i++) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;

        if (!cin) { // bad input
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Bad input; input process terminated" << endl;
            break;
        } else if (temp < 0) {
            break; // signal to terminate
        }
        arr[i] = temp;
    }

    return arr + i;
}

void show_array(const double* arr, const double* end) {
    for (int i = 0; (arr + i) != end; i++) {
        cout << "Property #" << (i + 1) << ": $";
        cout << arr[i] << endl;
    }
}

// muliplies each element of arr[] by r
void revalue(const double r, double* arr, const double* end) {
    for (int i = 0; (arr + i) != end; i++)
        arr[i] *= r;
}

void ex07() {
    const int max = 5;
    double properties[max];

    double* end = fill_array(properties, max);
    show_array(properties, end);

    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor)) { // bad input
        cin.clear(0);
        while (cin.get() != '\n') continue;
        cout << "Bad input; Please enter a number: ";
    }

    revalue(factor, properties, end);
    show_array(properties, end);

    cout << "Done." << endl;
    cin.get();
    cin.get();
}

const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};



int getinfo(student pa[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        cout << "Enter student name: ";
        cin >> pa[i].fullname;
        cout << "Enter a hobby: ";
        cin >> pa[i].hobby;
        cout << "Enter ooplevel: ";
        cin >> pa[i].ooplevel;
    }

    return i;
}

void display1(student st) {
    cout << "Student info" << endl;
    cout << "name: " << st.fullname << endl;
    cout << "hobby: " << st.hobby << endl;
    cout << "ooplevel: " << st.ooplevel << endl;
}

void display2(const student* ps) {
    cout << "Student info" << endl;
    cout << "name: " << ps->fullname << endl;
    cout << "hobby: " << ps->hobby << endl;
    cout << "ooplevel: " << ps->ooplevel << endl;
}

void display3(const student ps[], int n) {
    for (int i = 0; i < n; i++) 
        display1(ps[i]);  // or display2(ps + i);
}

void ex09() {
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }

    display3(ptr_stu, entered);
    delete [] ptr_stu;
}

double add(double x, double y) {
    return x + y;
}

double calculte(double x, double y, double (*pf)(double, double)) {
    return (*pf)(x, y);
}

void ex10() {
    double q = calculte(2.5, 10.4, add);
    cout << "q: " << q << endl;
}

int main() {

    ex10();
    return 0;
}
