#ifndef BANK_H_
#define BANK_H_
#include <string>
class Bank
{
    private:
        std::string depositor;
        std::string account_num;
        double balance;
    public:
        Bank(const std::string& dep, const std::string& acc_num, const double bal);
        void show();
        void deposit(const double money);
        void withdraw(const double money);
};
#endif
