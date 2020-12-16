#include "pch.h"
#include <iostream>

double a[2];
double b[2];
double proizvedenie[1];
double one()
{
	std::cout << "Введите 2 координаты вектора a:= " << std::endl;
	std::cout << "x1 := ";
	std::cin >> a[0];
	std::cout << "y1 := ";
	std::cin >> a[1];

	return 0;
}
void two()
{

	std::cout << "Введите 2 координаты вектора b: = " << std::endl;
	std::cout << "x2 := ";
	std::cin >> b[0];
	std::cout << "y2 := ";
	std::cin >> b[1];

}
int resultat()
{

	proizvedenie[0] = (a[0] * b[0]) + (a[1] * b[1]);
	std::cout << "Скалярное произведение векторов a и b: = " << std::endl;
	std::cout << proizvedenie[0] << std::endl;


	return 0;

}

int main()
{
	setlocale(LC_ALL, "Russian");
	one();
	two();
	resultat();

}
