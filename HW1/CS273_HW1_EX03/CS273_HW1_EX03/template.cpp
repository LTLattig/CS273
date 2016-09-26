#include <iostream>
#include <vector>

//18.
template <typename T>
class MyVec 
{
private:
	T *array;
public:
	MyVec(int size) {
		array = new T[size];
	}
	~MyVec() {
		delete[] array;
	}
};

int main()
{
	//19.
	MyVec<double>(3);

	//20.
	std::vector<char> vect (4);

	//21.
	for (int i = 0; i < 3; i++)
	{
		vect[i] = 'a';
	}
	//22. Answer in code below
	std::cout << "size: " << vect.size() << std::endl;
}

//17.
template <typename T>
void swap(T & A, T & B)
{
	T tmp = A;
	A = B;
	B = tmp;
}


