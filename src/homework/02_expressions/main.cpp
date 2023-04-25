//write include statements
#include<iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout; using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount = 0, tip_rate = 0, tip_amount = 0, tax_amount = 0, total = 0;

	cout<<"Cost of Meal: $";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Tip Percentage (as a decimal): ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<"\n";

	cout<<"Meal Amount: $"<<meal_amount<<"\n";
	cout<<"Sales Tax: $"<<tax_amount<<"\n";
	cout<<"Tip Amount: $"<<tip_amount<<"\n";
	cout<<"Total: $"<<total<<"\n";

	return 0;
}
