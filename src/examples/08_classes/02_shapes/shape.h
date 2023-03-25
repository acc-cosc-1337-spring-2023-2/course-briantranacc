//shape.h
#include <iostream>

#ifndef SHAPE_H
#define SHAPE_H

class Shape//Abstract class
{
public:
    virtual void draw() = 0;//pure virtual function
};

#endif