#include "my_vector.h"

//
using std::cout;

Vector::Vector(int s)
: capacity{s}, elements{new int[s]}
{
    cout<<"Created new memory at "<<elements<<"\n";
}

Vector::~Vector()
{
    cout<<"Delete the memory at "<<elements<<"\n";
    delete[] elements;
}

//Free function
void use_vector()
{
    Vector v(3);
}