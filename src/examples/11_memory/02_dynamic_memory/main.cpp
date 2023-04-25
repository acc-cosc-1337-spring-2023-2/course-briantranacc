#include<iostream>
#include<memory>

using std::cout; using std::unique_ptr; using std::make_unique;
using std::shared_ptr; using std::make_shared;
using std::weak_ptr;

int main() 
{
	//pointer points to an address on the stack
	int num = 5; //stack variable --- local variables to functions
	int* num_ptr = &num; //not dynamic memory

	//creating dynamic memory(lives on the heap) with pointers
	//create memory
	int* num_ptr2 = new int (10);
	//use memory / data at the memory location
	cout<<*num_ptr2<<"\n\n";
	//delete memory
	delete num_ptr2;

	//SMART POINTERS
	unique_ptr<int> num_up = make_unique<int>(100);
	cout<<*num_up<<"\n";

	shared_ptr<int> num_sp = make_shared<int>(200);
	cout<<*num_sp<<"\n";
	shared_ptr<int> num_sp1 = num_sp;
	cout<<*num_sp1<<"\n";
	cout<<num_sp1.use_count()<<"\n";

	weak_ptr<int> num_wp = num_sp;
	cout<<*num_wp.lock()<<"\n";

	return 0;
}