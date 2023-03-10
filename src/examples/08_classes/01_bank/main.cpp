#include<iostream>
#include<time.h>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"

using std::cout; using std::cin;

int main()
{
	BankAccount *account;// assign the variable to point to later
	srand(time(NULL));
	SavingsAccount savings;
	show_balance(savings);
	cout<<savings.get_balance()<<"\n";

	account = &savings;//point to the memory of savings
	cout<<account->get_balance()<<"\n";//dereference the pointer

	CheckingAccount checking;//cust 0
	/*
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

	*/
	return 0;
}