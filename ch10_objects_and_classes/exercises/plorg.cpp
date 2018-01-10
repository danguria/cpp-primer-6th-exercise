#include <iostream>
#include <string.h>
#include "plorg.h"
using namespace std;

Plorg::Plorg(const int ci, const char* name)
{
    strncpy(this->name, name, Len);
    this->ci = ci;
}
void Plorg::set_ci(const int ci)
{
    this->ci = ci;
}

void Plorg::show() const
{
    cout << "name: " << name << endl;
    cout << "ci: " << ci << endl;
}

