#include <iostream> 
#include <locale.h> 
#include <iomanip> 
#include <bitset>

int main()
{
	setlocale(LC_ALL, "Russian");

	// ������������ �������

	int num_of_cols = 100, num_of_rows = 100;
	int row = 0;
	int col = 0;

	// ������� 1
	
	double * ptr_double = new double; // ���������� ���������� � ������������ ������
	int array_len = 10; // ������������ ��������
	double * ptr_double_1Darray = new double[array_len];

	// ������� 2

	for (int row = 0; row < num_of_rows; row++)
	{
		ptr_double_1Darray[row] = 1;
	}

	// ������� 3

	double ** ptr_double_2Darray = new double*[num_of_rows]; // ��������� �� ������ ���������� �� ������ (1D �������)
	for (int row = 0; row < num_of_rows; row++)
	{
		ptr_double_2Darray[row] = new double[num_of_cols]; // ��������� ������ ��� ������ - ���������� ������
		for (int col = 0; col <num_of_cols; col++)
		{ 
		ptr_double_2Darray[row][col] = 1; // ����� ����� �������� ������������� ������� - ������� ��������� ��������
		}
	}

	// ������� 4

	// ��� �� ���������� �� ���� ������ (������ ������)

	/*

	���


	for (;;)
	{
		double * ptr_double_error = new double;
	}

	���

	*/

	// ������� 5

	delete ptr_double;

	delete[] ptr_double_1Darray;

	for (int row = 0; row < num_of_rows; row++)
	{
		delete[] ptr_double_2Darray[row];
	}
	delete[] ptr_double_2Darray;

	std::system("pause"); // ����� ������� system() �� ����������� ����������
	return 0;
}















