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
	//����������� �����������
	MyStroka(const MyStroka& str)
	{
		size = str.size;
		arr = str.arr;
	}
	//�������������� ������� ���������� �� ������������ 
	MyStroka(char* stroka)
	{
		arr = (char*)malloc(sizeof(char) * strlen(stroka));
		memcpy_s(arr, sizeof(arr), stroka, sizeof(stroka));
	}
	//�������� ������������� �������
	MyStroka(int _size)
	{
		arr = (char*)malloc(sizeof(char) * _size);
	}
	//�������� ������ �������� 80 ��������
	MyStroka()
	{
		arr = (char*)malloc(sizeof(char) * 80);
	}
	////������� ���� ������ �� ���������
	//~MyStroka()
	//{
	//	delete[] arr;
	//}
	//������� ���� ������ �� ���������
	~MyStroka()
	{
		delete[] arr;
	}
};

