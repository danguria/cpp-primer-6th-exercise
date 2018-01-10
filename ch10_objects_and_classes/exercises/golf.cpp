#include <iostream>
#include <string.h>
#include "golf.h"
using namespace std;

Golf::Golf(const char* name, int hc)
{
    strncpy(fullname, name, Len);
    this->hc = hc;
}


Golf::Golf()
{
    cout << "enter name of a golf: ";
    char fullname[Len];
    cin.getline(fullname, Len);
    
    cout << "enter handicap: ";
    int hc;
    cin >> hc;

    *this = Golf(fullname, hc);
}


void Golf::handicap(const int hc)
{
    this->hc = hc;
}


void Golf::showgolf() const
{
    cout << "name: " << fullname << endl;
    cout << "handicap: " << hc << endl;
}


/*
void setgolf(golf& g, const char* name, int hc)
{
    strncpy(g.fullname, name, Len);
    g.handicap = hc;
}


int setgolf(golf& g)
{
    cout << "enter name of a golf: ";
    char fullname[Len];
    cin.getline(fullname, Len);
    
    cout << "enter handicap: ";
    int hc;
    cin >> hc;

    setgolf(g, fullname, hc);
    if (fullname[0] == '\0') return 0;
    return 1;
}


void handicap(golf& g, int hc)
{
    g.handicap = hc;
}


void showgolf(const golf& g)
{
    cout << "name: " << g.fullname << endl;
    cout << "handicap: " << g.handicap << endl;
}
*/
