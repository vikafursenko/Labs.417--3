#include "pch.h"
#include <iostream>
#include <locale.h>
#include <iomanip>
#include <bitset>
int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	double a[2];
	double b[2];
	double result = 0;
	std::cout << "a = ";
	for (i = 0; i < 2; i++) std::cin >> a[i];
	std::cout << "b = ";
	for (i = 0; i < 2; i++)
		std::cin >> b[i];
	for (i = 0; i < 2; i++)
		result += a[i] * b[i];
	std::cout << "a*b = " << result << std::endl;


	std::system("pause");
	return 0;
}