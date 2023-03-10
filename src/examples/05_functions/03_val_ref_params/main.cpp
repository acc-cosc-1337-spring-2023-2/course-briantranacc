#include<iostream>
#include "val_ref.h"

using std::cout;

int main()
{
    auto num = 10;
    ref_params(num); //will always be 20
    cout<<num<<"\n";

    num = 30;
    val_params(num); //returns whatever num is
    cout<<num<<"\n";
    return 0;
}