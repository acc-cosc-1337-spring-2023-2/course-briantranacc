//write include statements
#include "dna.h"

//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice, num, num1, num2;
	auto exitProgram = 'n';

	do
	{
		cout<<"1-Factorial\n";
		cout<<"2-Greatest Common Divisor\n";
		cout<<"3-Exit\n\n";
		cout<<"Enter your choice: ";
        cin>>choice;
		cout<<"\n";

		if (choice == 1)
		{
			cout<<"You chose Factorial.\n";
			cout<<"Enter a number: "; 
			cin>>num;
			cout<<"The factorial of "<<num<<" is "<<factorial(num)<<"\n\n";
		}
		else if (choice == 2)
		{
			cout<<"You chose Greatest Common Divisor.\n";
			cout<<"Enter the first number: ";
			cin>>num1;
			cout<<"Enter the second number: ";
			cin>>num2;
			cout<<"The Greatest Common Divisor is "<<gcd(num1, num2)<<"\n\n";
		}
		else if (choice == 3)
		{
			cout<<"Are you sure you want to exit? (enter y to exit): ";
			cin>>exitProgram;
		}
		else
		{
			cout<<"Invalid option.\n\n";
		}
		
	}
	while(exitProgram != 'y');

	return 0;
}