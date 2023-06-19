#pragma once
#include <malloc.h>
#include<cstring>
#include<iostream>
#include<string.h>
class MyStroka
{
private:
	int size;
	char* arr;
public:
	void set_size(int _size);
	int get_size();
	void set_arr(char* mass);
	void info();
	//конструктор копирования
	MyStroka(const MyStroka& str)
	{
		size = str.size;
		arr = str.arr;
	}
	//инициализирует строкой полученной от пользователя 
	MyStroka(char* stroka)
	{
		arr = (char*)malloc(sizeof(char) * strlen(stroka));
		memcpy_s(arr, sizeof(arr), stroka, sizeof(stroka));
	}
	//создание произвольного размера
	MyStroka(int _size)
	{
		arr = (char*)malloc(sizeof(char) * _size);
	}
	//создание строки размером 80 символов
	MyStroka()
	{
		arr = (char*)malloc(sizeof(char) * 80);
	}
	////удаляет нашу строку из программы
	//~MyStroka()
	//{
	//	delete[] arr;
	//}
	//удаляет нашу строку из программы
	~MyStroka()
	{
		delete[] arr;
	}
};

