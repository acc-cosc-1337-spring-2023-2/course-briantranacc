#include<iostream>
#include<time.h>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"

using std::cout; using std::cin;

int main()
{
	srand(time(NULL));
	SavingsAccount savings;
	cout<<savings<<"\n";

	CheckingAccount account;//cust 0
	auto choice = 'c';

	cout<<"Checking or savings ";
	cin>>choice;

	if(choice == 'c' || choice == 'C')
	{
		cout<<account;
		cout<<account.get_balance()<<"\n";
		show_balance(account);

		run_menu(account);
	}
	else
	{
		cout<<savings;
		cout<<savings.get_balance()<<"\n";
		show_balance(savings);
		
		run_menu(savings);
	}
	
	cout<<account.get_balance()<<"\n";

	return 0;
}