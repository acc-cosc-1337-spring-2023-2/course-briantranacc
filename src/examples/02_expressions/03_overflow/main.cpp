#include<iostream>

using std::cout;

int main()
{
    auto num = 5; //int as a whole number
    auto num1 = 5.5; //double decimal number

    cout<<"Size of num: "<<sizeof(num)<<"\n";
    cout<<"Size of num: "<<sizeof(num1)<<"\n";

    num = 2147483647; //2^31 ; max int value
    cout<<"Max value of num: "<<num<<"\n";

    num += 1;
    cout<<"Value for num int: "<<num<<"\n";

    return 0;
}