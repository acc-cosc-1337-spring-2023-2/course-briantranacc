//customer.cpp
#include "customer.h"

using std::make_unique;

Customer::Customer()
{
    accounts.push_back(make_unique<CheckingAccount>());
    accounts.push_back(make_unique<SavingsAccount>());
}