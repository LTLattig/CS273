#include "Circle.h"
#include <iostream>

int main()
{
	Circle c1(1); 
	Circle c2(2);
	Circle c3;

	c3 = c1 + c2;

	double radius = c3.getRad();
	std::cout << radius << std::endl;
}