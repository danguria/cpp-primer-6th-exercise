#include <iostream>
#include <string>
#include "bank.h"

Bank::Bank(const std::string& dep, const std::string& acc_num, const double bal)
{
    depositor = dep;
    account_num = acc_num;
    if (bal > 0)
        balance = bal;
    else balance = 0;
}

void Bank::show()
{
    std::cout << "depositor: " << depositor << std::endl;
    std::cout << "account number: " << account_num << std::endl;
    std::cout << "balance : " << balance << std::endl;
}

void Bank::deposit(const double money)
{
    // should be check if balance + money
    // is greater than maximun value of unsigned double
    if (money > 0)
        balance += money;
}

void Bank::withdraw(const double money)
{
    if (money > 0 && balance >= money)
        balance -= money;
}
