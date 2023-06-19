#include <iostream>
#include"MyStroka.h"
#include<Windows.h>
#include<string>
#include "MyString.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    int size;
    std::cout << "Введите размер вашей строки: ", std::cin >> size;
    MyStroka stroka{ size };
    char* stroka1=new char[size];
    std::cout << "Введите вашу строку: ";
    std::cin.ignore();
    std::cin.getline(stroka1, strlen(stroka1));
    std::cout << stroka1;
    MyStroka stroka2{ stroka1 };
    std::cout << std::endl;
    std::cin.ignore();
    stroka2.info();
}

