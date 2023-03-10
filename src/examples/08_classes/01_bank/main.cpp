#include<iostream>
#include<time.h>
#include<vector>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"

using std::cout; using std::cin; using std::vector;

int main()
{
	vector<BankAccount*> accounts;// assign the variable to point to later
	srand(time(NULL));
	SavingsAccount savings;
	CheckingAccount checking;//cust 0

	accounts.push_back(&checking);
	accounts.push_back(&savings);

	run_menu(accounts);
	
	return 0;
}