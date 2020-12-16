#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<bitset>
#include<iostream>
#include<math.h> // ���������� ��� ���������� �����
#include <cstdio>
#include <fstream>
int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "\t\t\t" << "������������ 6 " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "\t" << "������� ���������� �����" << std::endl;
    std::cout << "" << std::endl;
    int int_a = 17;
    int int_b = 7;
    double double_a = 17.0;
    double double_b = 7.0;

    std::cout << "int 17 : int 7 = " << int_a / int_b << std::endl; // � ������ ������� �� �������� ������� � ������� ������ ����� �����
    std::cout << "double 17 : int 7 = " << double_a / int_b << std::endl;// � ������ ������� �� ������� �����, ��� ��� ������������� ������� ��� ������ ����� (! ����� ������ ��������������)
    std::cout << "int 17 : double 7 = " << int_a / double_b << std::endl;// � ������ ������� �� ������� �����, ��� ��� ������������� ������� ��� ������ ����� (! ����� ������ ��������������)
    std::cout << "double 17 : double 7 = " << double_a / double_b << std::endl; //  �� ������� ��������� �����
    std::cout << "" << std::endl;
    std::cout << "\t" << "����� ���������� �����" << std::endl;
    std::cout << "" << std::endl;
    std::cout << 17.0 / 7.0 << std::endl; // ������������� ������ ��� � ��������� ������ ����� ���������� "."
    std::cout << (double)int_a / (double)7; //������� ���������/���������� � ������� ���� ����� ���������� ����� � ������ �������
    std::cout << "" << std::endl;
    std::cout << "\t" << "���������� �����" << std::endl;
    std::cout << "" << std::endl;
    double x1 = 15.6;
    double x2 = 15.4;
    std::cout << "round(15.6) = " << round(x1) << std::endl; // ����������� ���������� (round) � ��������/�������� �������� ����� 0.5
    std::cout << "round(15.4) = " << round(x2) << std::endl; //
    std::cout << "ceil(15.6) = " << ceil(x1) << std::endl; // ���������� � ��������
    std::cout << "ceil(15.4) = " << ceil(x2) << std::endl; // ���������� � ��������
    std::cout << "floor(15.6) = " << floor(x1) << std::endl; //���������� � ��������
    std::cout << "floor(15.4) = " << floor(x2) << std::endl; //���������� � ��������

    std::cout << "" << std::endl;
    FILE* ptrFile = fopen("file.txt", "rb"); // � ������ ����� �������� ������ "������ ������������� ������� fopen"
    if (ptrFile == NULL) perror("������ �������� �����");
    else
    {
        while (!feof(ptrFile)) // ��������� ����, ���� �� ����� �����
        {
            char buffer[100] = { 0 };
            fgets(buffer, 100, ptrFile);
            std::cout << buffer << std::endl;
        }
        fclose(ptrFile); // ������� ����
    }
    FILE* ptrFile1 = fopen("examp.txt", "wb"); // ������� ��� ������
    fputs("This is sample.", ptrFile1); // �������� � ���� ������
    fseek(ptrFile1, 9, SEEK_SET); // �������� ������� �� 9 ���� ������������ ������ �����
    fputs("parta", ptrFile1); // �������� ����� � ����    fclose ( ptrFile1 );
    FILE* ptrFile2 = fopen("file.txt", "w"); // ������� ���� file.txt � ������� �������� � ������ ������ ��� ������
    if (ptrFile2 != NULL) // ���������, ������� �� ������� ����
    {
        fputs("������ ������������� ������� fopen ", ptrFile2); // �������� ������ � ����
        fclose(ptrFile2);
    }
    system("pause");
    return 0;

}