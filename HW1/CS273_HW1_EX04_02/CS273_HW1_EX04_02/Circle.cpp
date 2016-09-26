#include "Circle.h"

Circle Circle::operator+(const Circle & c)
{
	Circle circ;
	circ.radius = this->radius + c.radius;
	return circ;
}