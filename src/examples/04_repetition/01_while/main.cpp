#include "while.h"

using std::string;
using std::cin; using std::cout;

int main() 
{
	auto choice = 'n';

	do
	{
		auto num = 0;
		cout<<"Enter a number: ";
		cin>>num;

		auto result = sum_of_squares(num);
		cout<<"Sum of squares: "<<result<<"\n";

		cout<<"Enter y to continue...";
		cin>>choice;
	}
	while(choice == 'y' || choice == 'y');

	//string str = "Hello";
	//display(str)

	return 0;
}