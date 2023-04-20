//
#include "my_vector.h"

int main()
{
    //std::cout<<"load to the stack\n";
    use_vector();
    //std::cout<<"unloaded from the stack\n";
    int num = 5;
    int& num_ref = num;
    

    return 0;
}

