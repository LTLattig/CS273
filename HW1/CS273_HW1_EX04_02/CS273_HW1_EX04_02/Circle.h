#pragma once
#ifndef _CIRCLE_H_
#define _CIRCLE_H_


class Circle
{
private:
	double radius;
public:
	Circle() { radius = 0; }
	Circle(double X) { radius = X; }
	double getArea() { return radius * 3.1415 *3.1415; }
	void setRad(double X) { radius = X; }
	double getRad() { return radius; }
	Circle operator+(const Circle& c);
};


#endif