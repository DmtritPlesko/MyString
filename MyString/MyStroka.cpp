#include "MyStroka.h"

void MyStroka::set_size(int _size)
{
	size = _size;
}

int MyStroka::get_size()
{
	return size;
}

void MyStroka::set_arr(char* mass)
{
	arr = mass;
}

void MyStroka::info()
{
	//for (int i = 0; i < size; i++)
	//	std::cout << arr[i];
	std::cout << arr;
}
