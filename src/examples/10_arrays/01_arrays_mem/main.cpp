#include "arrays_mem.h"

int main() 
{
	//use_stack_array();
	//array_months();
	//array_and_pointers();

	const int SIZE = 4;
	int numbers[SIZE]{5, 8, 0, -1};

	//display_array(numbers);
	display_array(numbers, SIZE);
	return 0;

}