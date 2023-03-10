#include<iostream>
#include<vector>

using std::vector; using std::cout;

int main()
{
    vector<int> nums;//empty list
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(4);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(10);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(11);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(5);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(50);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";
    
    for(auto n: nums)
    {
        cout<<n<<",";
    }

    cout<<"\n\n";

    vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f'};
    cout<<"Size: "<<letters.size()<<"\n";
    cout<<"Capacity: "<<letters.capacity()<<"\n\n";

    vector<char> all_As(10, 'a');

    for(auto ch: all_As)
    {
        cout<<ch<<",";
    }

    cout<<"\n";

    return 0;
}