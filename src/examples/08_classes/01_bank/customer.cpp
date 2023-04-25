//customer.cpp
#include "customer.h"

using std::make_unique;

Customer::Customer()
{
    accounts.push_back(make_unique<CheckingAccount>());
    accounts.push_back(make_unique<SavingsAccount>());
}

Customer::Customer(int checking_balance, int savings_balance)
{
    accounts.push_back(make_unique<CheckingAccount>(checking_balance));
    accounts.push_back(make_unique<SavingsAccount> (savings_balance));
}