#include <iostream>


int *doubleCapacity(int *list, int size);

int main()
{
	//1.
	double *pntrD;
	//2.
	pntrD = new double;
	//3.
	*pntrD = 4.12;
	//3_TEST
	std::cout << *pntrD << std::endl;
	//4.
	delete pntrD;
	
	//5. Line 2, instead of assigning a character value to variable to which "variable" points gives variable a new adress to look at. 

	//6. 
	int myVar;
	//6_TEST
	std::cout << &myVar << std::endl;

	//7. 
	int * pArray = new int[10];
	//8.
	for (int i = 0; i < 10; i++)
	{
		*(pArray + i) = 42;
	}
	//test
	for (int i = 0; i < 10; i++)
	{
		std::cout << pArray[i] << std::endl;
	}

	delete[] pArray;

	return 0;
}

//10. 
int *doubleCapacity(int *list, int size)
{
	int * tempList = new int[2 * size];

	for (int i = 0; i < 2 * size; i++)
	{
		if (i < size)
			*(tempList + i) = *(list + i);
		else if (i >= size)
			*(tempList + i) = 0;
	}

	return tempList;
}