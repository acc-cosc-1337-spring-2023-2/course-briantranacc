#include<iostream>
#include<time.h>
#include "atm.h"
#include "checking_account.h"

using std::cout;

int main()
{
	srand(time(NULL));

	CheckingAccount account;//cust 0
	cout<<account;
	cout<<account.get_balance()<<"\n";

	show_balance(account);
	//run_menu(account);

	cout<<account.get_balance()<<"\n";

	return 0;
}