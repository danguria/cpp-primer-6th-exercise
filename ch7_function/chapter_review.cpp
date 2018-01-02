#include <iostream>
using namespace std;


// review 2
void igor()  // header or prototype
{ // block, implentation, definition

}

float tofu(int) {}

double mpg(double, double);

long summation(long arr[], int size);
double doctor(const string);

struct boss {};
void ofcourse(boss);

struct map {};
string plot(map*);

void review03(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) 
        arr[i] = value;
}

void review04(int* first, int* end, int value) {
    int *cur = first;
    while (cur != end) {
        *cur = value;
        cur++; // cur = cur + 1
    }
}

double review05(const double arr[], const int size) {
    if (size < 1) {
        cout << "size must be greater than 0" << endl;
        return 0.0;
    }

    double max = arr[0];
    for (int i = 1; i < size; i++) 
        if (max < arr[i])
            max = arr[i];
    return max;
}

int review08(char* str, char c1, char c2) {
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c1) {
            str[i] = c2;
            cnt++;
        }
    }

    return cnt;
}

// 30 + 4 * 3000000000
struct applicant {
    char name[30];
    int credit_rating[3000000000];
};

void review12_1(applicant app) {
    cout << app.name << endl;
    for (int i = 0; i < 3; i++)
        cout << (app.credit_rating)[i] << endl;
}

// 4 bytes
void review12_2(applicant* app) {
    cout << app->name << endl;
    cout << (*app).name << endl;
    for (int i = 0; i < 3; i++)
        cout << (app->credit_rating)[i] << endl;
}

void f1(applicant* app) {}

typedef void (*fp1) (applicant*);
fp1 p1 = f1;

const char* f2(const applicant* app1, const applicant* app2) {
    const char* msg = "hi";
    return  msg;
}

typedef const char* (*fp2)(const applicant*, const applicant*);
fp2 p2 = f2;

fp1 ap[5];
fp2 (*pa)[10];
int main() {
    return 0;
}
