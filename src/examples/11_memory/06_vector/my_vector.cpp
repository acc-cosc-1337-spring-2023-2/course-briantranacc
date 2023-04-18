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
    //do not create dynamic memory for v; use a stack variable Vector v(3);
    Vector* v = new Vector(3);
    delete v;
}