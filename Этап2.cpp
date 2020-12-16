#include "pch.h"
#include <iostream>

int main() 
{
	setlocale(LC_ALL, "Russian");
	float a[2], b[2], scalar = 0.0;
	int i;

	std::cout << "Вектор a =  " << std::endl;
	for (i = 0; i < 2; i++)
		std::cin >> a[i];
	
	std::cout << "Вектор b =  " << std::endl;
	for (i = 0; i < 2; i++)
		std::cin >> b[i];
	

	for (i = 0; i < 2; i++)
		scalar+= (a[i] * b[i]);
	

	std::cout << "Скалярное произведение = " << scalar << std::endl;

	return 0;
}