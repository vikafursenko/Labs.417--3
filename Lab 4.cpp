#include <iostream> 
#include <locale.h> 
#include <iomanip> 
#include <bitset>

int main()
{
	setlocale(LC_ALL, "Russian");

	// ДИНАМИЧЕСКИЕ МАССИВЫ

	int num_of_cols = 100, num_of_rows = 100;
	int row = 0;
	int col = 0;

	// Задание 1
	
	double * ptr_double = new double; // объявление переменной в динамической памяти
	int array_len = 10; // присваивание значения
	double * ptr_double_1Darray = new double[array_len];

	// Задание 2

	for (int row = 0; row < num_of_rows; row++)
	{
		ptr_double_1Darray[row] = 1;
	}

	// Задание 3

	double ** ptr_double_2Darray = new double*[num_of_rows]; // указатель на массив указателей на строки (1D массивы)
	for (int row = 0; row < num_of_rows; row++)
	{
		ptr_double_2Darray[row] = new double[num_of_cols]; // выделение памяти под строку - одномерный массив
		for (int col = 0; col <num_of_cols; col++)
		{ 
		ptr_double_2Darray[row][col] = 1; // здесь можно провести инициализацию массива - задание начальных значений
		}
	}

	// Задание 4

	// Вся ОП занимается за пару секунд (утечка памяти)

	/*

	КОД


	for (;;)
	{
		double * ptr_double_error = new double;
	}

	КОД

	*/

	// Задание 5

	delete ptr_double;

	delete[] ptr_double_1Darray;

	for (int row = 0; row < num_of_rows; row++)
	{
		delete[] ptr_double_2Darray[row];
	}
	delete[] ptr_double_2Darray;

	std::system("pause"); // вызов функции system() из стандартной библиотеки
	return 0;
}















