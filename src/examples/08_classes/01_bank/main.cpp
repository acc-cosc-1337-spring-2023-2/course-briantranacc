#include<iostream>
#include<memory>
#include<time.h>
#include<vector>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"

using std::cout; using std::cin; using std::vector;
using std::unique_ptr; using std::make_unique;
using std::move;

int main()
{
	vector<unique_ptr<BankAccount>> accounts;// assign the variable to point to later
	srand(time(NULL));

	accounts.push_back(make_unique<CheckingAccount>());
	accounts.push_back(make_unique<SavingsAccount>());

	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";

	run_menu(accounts);
	
	return 0;
}