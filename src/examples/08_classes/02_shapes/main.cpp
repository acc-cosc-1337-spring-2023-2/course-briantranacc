//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"

using std::vector;
using std::unique_ptr; using std::make_unique;

/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	vector<unique_ptr<Shape>> shapes;
		shapes.push_back(make_unique<Circle>());
		shapes.push_back(make_unique<Line>());

		shapes[0]->draw();
		shapes[1]->draw();

		for(auto& shape: shapes)
		{
			shape->draw();
		}

	return 0;
}