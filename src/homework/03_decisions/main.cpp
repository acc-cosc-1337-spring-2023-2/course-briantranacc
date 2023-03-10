//write include statements
#include "decisions.h"

using std::cout; using std::cin;

int main() 
{
	auto option = 0;
	auto grade = 0;

	cout<<"      MAIN MENU\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n";
	cout<<"\nEnter 1, 2, or 3 for your option: ";
	cin>>option;

	switch (option)
	{
	case 1:
		cout<<"\nEnter a numerical grade: ";
		cin>>grade;
		cout<<"Letter grade: "<<get_letter_grade_using_if(grade)<<"\n";		
		break;
	case 2:
		cout<<"\nEnter a numerical grade: ";
		cin>>grade;
		cout<<"Letter grade: "<<get_letter_grade_using_switch(grade)<<"\n";
		break;
	case 3:
		break;
	default:
		cout<<"Invalid option.\n";
		break;
	}

	return 0;
}