#include "pch.h"
#include <iostream>
#include <string>

class scalar
{
public:
	double a[2];
	double b[2];
	double proizvedenie[1];
	std::string name;
	void one()
	{
		std::cout << "Введите 2 координаты вектора a:= " << std::endl;
		std::cout << "x1 := ";
		std::cin >> a[0];
		std::cout << "y1 := ";
		std::cin >> a[1];


	}
	void two()
	{
		std::cout << "Введите 2 координаты вектора b: = " << std::endl;
		std::cout << "x2 := ";
		std::cin >> b[0];
		std::cout << "y2 := ";
		std::cin >> b[1];

	}
	double resultat()
	{
		proizvedenie[0] = (a[0] * b[0]) + (a[1] * b[1]);

		return 0;

	}
	double vivod()
	{
		std::cout << "Скалярное произведение векторов a и b: = " << std::endl;
		std::cout << proizvedenie[0] << std::endl;


		return 0;

	}


};
int main()
{
	setlocale(LC_ALL, "Russian");

	scalar vector;
	vector.one();
	vector.two();
	vector.resultat();
	vector.vivod();
	return 0;
	system("pause");
}