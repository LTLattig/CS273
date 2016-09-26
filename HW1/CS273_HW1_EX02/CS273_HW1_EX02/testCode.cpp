#include <iostream>
#include "Circle.h"

int main()
{
	//12. 
	Circle myCircle1;

	//13.
	Circle myCircle2(10);

	//14.
	Circle *c3 = new Circle(12);

	//15.
	Circle cArr[10];

	//16. assigns radius 15 to array allocated above (& prints to screen to test)
	for (int i = 0; i < 10; i++)
	{
		cArr[i].setRad(15);
		std::cout << cArr[i].getRad() << " " << cArr[i].getArea() << std::endl;
	}

	std::cout << myCircle1.getRad() << " " << myCircle1.getArea() << std::endl;
	std::cout << myCircle2.getRad() << " " << myCircle2.getArea() << std::endl;
	
	return 0;
}