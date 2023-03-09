//bank_account.cpp
#include "bank_account.h"

void BankAccount::get_balance_from_db()
{   
    balance = rand() % 10000 + 1; //value between 1 and 10000
}

void BankAccount::deposit(int amount)
{
    if (amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

//Free functions; not part of class
void show_balance(BankAccount &account)
{
    std::cout<<"Friend Balance: "<<account.balance<<"\n";
}

std::ostream& operator<<(std::ostream& out, const BankAccount &account)
{
    out<<"Overload balance: "<<account.balance<<"\n";

    return out;
}