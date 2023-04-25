#include "my_vector.h"

using std::cout;

Vector::Vector(int s)
 : capacity{s}, elements{new int[s]}
{
    cout<<"created new memory at "<<elements<<"\n";
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
1-Create temporary memory for v1
2-Copy values from v into v1 temporary memory
3-Delete v1 elements memory
4-Point v1 elements to temporary memory
5-Set v1.size to v.size
6-Return a reference to itself
*/

Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size];

    for(auto i=0; i < v.size; i++){
        temp[i] = v.elements[i];
    }

    cout<<"copy assignment delete memory at "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    cout<<"copy assignment new memory created "<<elements<<"\n";
    temp = nullptr;
    size = v.size;
    return *this;
}

/*
1-Get v.elements memory(switch/steal the pointer making v empty)
2-Get size from v
3-point v.elements to nothing(nullptr)
4-set v size to 0
*/

Vector::Vector(Vector&& v)
 : size{v.size}, elements{v.elements}
{
    cout<<"move constructor switch pointer "<<elements<<"\n";
    v.elements = nullptr;
    v.size = 0;
}

/*
1-Clear/delete original memory from v
2-Point v1 elements to v.elements
3-get size from v
4-Point v.elements to nullptr
5-Set v.size to 0
6-Return a self reference
*/

Vector& Vector::operator=(Vector&& v)
{
    cout<<"Move assignment delete memory "<<elements;
    delete[] elements;

    elements = v.elements;
    cout<<"Move assignment switch pointers "<<elements<<"\n";

    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
}

Vector::~Vector()
{
    cout<<"delete the memory at"<<elements<<"\n";
    delete[] elements;
}

//NOT A CLASS FUNCTION; THESE ARE FREE FUNCTIONS

void use_vector()
{   //recommended usage of my vector
    //cout<<"loaded to the stack\n";
    Vector v(3);
    v[0] = 3;//write
    cout<<v[0]<<"\n";//read
    //cout<<"unloaded fomm the stack\n";
    ////more code here
}

Vector get_vector()
{
    Vector v(3);
    return v;
}