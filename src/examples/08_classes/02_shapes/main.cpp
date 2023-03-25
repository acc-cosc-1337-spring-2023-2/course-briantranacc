//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	Shape* shape;//creates or points to stack memory or the heap later
	Circle circle;
	
	shape = &circle;
	shape->draw();
	
	Line line;

	shape = &line;
	shape->draw();

	return 0;
}