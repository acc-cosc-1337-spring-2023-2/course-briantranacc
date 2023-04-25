//savings_account.h
#include "bank_account.h"

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount() {}
    SavingsAccount(int b) : BankAccount(b){/**empty code block*/}
    int get_balance()const {return balance * 1.05;}
};

#endif