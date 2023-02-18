#include<iostream>

using std::cout; using std::cin;

int main()
{
    auto num = 10;
    int &num_ref = num;//num_ref will store the address of num

    cout<<"Num is: "<<num<<"\n";
    cout<<"Stack address for num is :"<<&num<<"\n\n";

    cout<<"Num value via num_ref: "<<num_ref<<"\n";
    cout<<"Address that num_ref points to: "<<&num_ref<<"\n\n";

    num_ref = 20;//
    cout<<"Num is: "<<num<<"\n";
    cout<<"Num value via num_ref is: "<<num_ref<<"\n";

    return 0;
}