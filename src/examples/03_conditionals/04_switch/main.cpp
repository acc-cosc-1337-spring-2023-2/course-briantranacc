#include<iostream>
#include "switch.h"

using std::cout; using std::cin;

int main() 
{
	auto value = 0;
	cout<<"Enter a value: ";
	cin>>value;

	auto result = menu(value);
	cout<<result<< "\n";

	return 0;
}