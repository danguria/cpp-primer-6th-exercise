#include "bank.h"

int main() 
{
    Bank b("sk", "1234", 20);

    b.show();
    b.deposit(30);
    b.show();
    b.withdraw(20);
    b.show();
    return 0;
}
