#include "bank_account.h"
/* impolementation for class function/method is optional in an abstract class
int BankAccount::get_balance() const
{
    return balance;
}
*/
//bank_account.cpp
void BankAccount::get_balance_from_db()
{   
    balance = rand() % 10000 + 1;//value between 1 and 10000
}
void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}
void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}
//FREE FUNCTIONS; NOT PART OF THE CLASS!!!
void show_balance(const BankAccount &account)
{
    std::cout<<"Friend balance: "<<account.balance<<"\n";
}
std::ostream& operator<<(std::ostream& out, const BankAccount &account)
{
    out<<"Overload balance: "<<account.balance<<"\n";
    return out;
}