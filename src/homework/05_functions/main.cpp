#include <iostream>
#include "func.h"

using std::cout; using std::cin; using std::string; 

int main() 
{
	int option;
	string dna_string;

	do
	{
		cout<<"\nMenu\n";
		cout<<"\n1-Get GC Content";
		cout<<"\n2-Get DNA Complement";
		cout<<"\n3-Exit\n";
		cout<<"\nEnter an option: ";
		cin>>option;

		switch(option)
		{
		case 1:
			cout<<"Enter DNA string: ";
			cin>>dna_string;
			cout<<"\nGC Content: "<<get_gc_content(dna_string) * 100<<"%\n";
			break;
		case 2:
			cout<<"Enter DNA string: ";
			cin>>dna_string;
			cout<<"\nDNA Complement: "<<get_dna_complement(dna_string)<<"\n";
			break;
		case 3:
			break;
		default:
			cout<<"Invalid Option.";
			break;
		}

	}
	while (option != 3);

	return 0;
}