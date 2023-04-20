#include "my_vector.h"

//
using std::cout;

Vector::Vector(int s)
: capacity{s}, elements{new int[s]}
{
    cout<<"Created new memory at "<<elements<<"\n";
}

Vector::Vector(const Vector& v)
 : size{v.size}, capacity{v.capacity}, elements{new int[v.capacity]}
{
    cout<<"Copy constructor = created memory at "<<elements<<"\n";
    for(auto i=0; i < v.size; i++)
    {
        elements[i] = v.elements[i];
    }
}

/*
1-Create temp memory for v1
2-Copy values from v into v1 temp memory
3-Delete v1 elements memory
4-Point v1 elements to temp memory
5-Set v1.size to v.size
6-Return a reference to itself

*/
Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size];

    for(auto i=0; i < v.size; i++)
    {
        temp[i] = v.elements[i];
    }

    cout<<"Copy assignment delete memory at "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    cout<<"Copy assignment new memory created "<<elements<<"\n";
    temp = nullptr;
    size = v.size;

    return *this;
}

Vector::~Vector()
{
    cout<<"Delete the memory at "<<elements<<"\n";
    delete[] elements;
}

//Free function
void use_vector()
{
    cout<<"loaded to the stack\n";
    Vector v(3);
    v[0] = 3;//write
    cout<<v[0]<<"\n";//read

    cout<<"unloaded from the stack\n";
}