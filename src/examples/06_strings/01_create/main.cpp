#include<iostream>
#include<string>

using std::cout; using std::string;


int main()
{
    string lang = "C++";
    auto num = 5;

    cout<<lang<<"\n";
    cout<<"Address of lang: "<<&lang<<"\n";
    cout<<"Address of num: "<<&num<<"\n";
    cout<<lang[0]<<"\n";
    cout<<"Address of character at 0 index: "<<static_cast<void *>(&lang[0])<<"\n";
    cout<<"Address of character at 1 index: "<<static_cast<void *>(&lang[1])<<"\n";
    cout<<"Address of character at 2 index: "<<static_cast<void *>(&lang[2])<<"\n";


    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n\n";

    lang.append(" is great fo");
    cout<<lang<<"\n";
    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n\n";

    lang.append("r");
    cout<<lang<<"\n";
    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n\n";
    

    /*
    string s0("Initial string");
    cout<<s0<<"\n";

    string s1(s0);
    cout<<s1<<"\n";

    string s3(s0, 8, 3);
    cout<<s3<<"\n";

    string s4("Another character sequence", 12);
    cout<<s4<<"\n";

    string s5(10, 'x');
    cout<<s5<<"\n";

    string s6(10, 42);//42 is an *
    cout<<s6<<"\n";

    string s7("123456abac**(**)");
    cout<<s7<<"\n";
    */

    return 0;
}