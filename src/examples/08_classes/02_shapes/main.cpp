//main
#include <iostream>
#include "shape.h"
#include "line.h"
#include "circle.h"

int main() 
{
	const auto SIZE = 3;
	Circle circles[SIZE];

	circles[0].draw();
	circles[1].draw();
	circles[2].draw();

	Line lines[SIZE];

	for(auto line: lines)
	{
		line.draw();
	}
	
	Shape* shapes = circles;
	shapes->draw();

	shapes = lines;
	shapes->draw();

	return 0;
}