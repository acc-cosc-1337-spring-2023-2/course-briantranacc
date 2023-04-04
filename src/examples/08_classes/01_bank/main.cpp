#include<iostream>
#include<time.h>
#include<vector>
#include "atm.h"
#include "customer.h"
#include "atm_data.h"

using std::vector;

int main()
{
	srand(time(NULL));

	vector<Customer> customers;//empty customer list
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());

	ATMData data;
	data.save_customers(customers);
	std::vector<Customer>& customers2 = data.get_customers();

	for(auto& customer: customers2)
	{
		std::cout<<customer.get_account(0)->get_balance();
		std::cout<<" ";
		std::cout<<customer.get_account(1)->get_balance();
		std::cout<<"\n";
	}

	//run_menu(customers);

	return 0;
}