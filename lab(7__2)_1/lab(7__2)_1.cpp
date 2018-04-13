// lab(7__2)_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "name.h"
#include <iostream>

void main()
{
	setlocale(LC_ALL,"Russian");
	Vector a;
	std::cin >> a;
	Vector b(a);
	std::cout << a;
	std::cout << b;
	a.Length(a);
	system("pause");
}