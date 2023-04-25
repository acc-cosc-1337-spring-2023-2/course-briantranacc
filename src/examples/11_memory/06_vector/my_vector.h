//
#include<iostream>

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    Vector(int s);
    Vector(const Vector& v);//copy constructor: Rule 1 of 3 in legacy C++
    Vector& operator=(const Vector& v); //copy assignment Rule 2 of 3 in legacy C++
    Vector(Vector&& v);//Rule 4 of 5 for modern C++ (C++11 and up)
    Vector& operator=(Vector&& v);
    int Size()const{return size;}
    int Capacity()const{return capacity;}
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    ~Vector();//Rule 3 of 3 in legacy C++
private:
    int size{0};//current size of the list; doubles as the current_index
    int capacity;//total available slots for elements    
    int* elements;//holds the dynamic list on the heap
};

#endif

//NOT A CLASS FUNCTION; THESE ARE FREE FUNCTIONS
void use_vector();
Vector get_vector();