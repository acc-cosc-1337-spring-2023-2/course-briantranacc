#include "decimals.h"//where to find add to double 1 function

#include<iostream>//to use cout

using std::cout;//explicitly tell C++ to only use cout from iostream and std

int main()
{
    double num = 0;
    double num1 = add_to_double_1(num);

    num1 = num1 + 1;

    cout<<"Adding to a double: "<<num1<<"\n";

    return 0;
}