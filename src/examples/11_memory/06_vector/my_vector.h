//
#include<iostream>

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    Vector(int s);
    Vector(const Vector& v);//copy constructor://Rule 1 of 3 in legacy C++
    Vector& operator=(const Vector& v); //copy assignment Rule 2 of 3 in legacy C++
    int Size() const {return size;}
    int Capacity() const {return capacity;}
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    ~Vector();//Rule 3 of 3 in legacy C++
private:
    int* elements;//holds the dynamic list on the heap
    int size{0};//current size of the list; doubles as the current_index
    int capacity;//total available slots for elements
};

#endif

//Free functions

void use_vector();