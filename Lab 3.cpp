#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<bitset>
#include<iostream>

int main()
{
    std::cout << "\t\t\t\t\t\t\t" << "��������� � �������� � ���" << std::endl;
    setlocale(LC_ALL, "Russian");
    //int *print_int;

    //������ ����������� ���������� ������� ������������������
    //std::cout<<print_int<<std::endl; // ���������� ����� � ���������
//std::cout<<*print_int<<std::endl; //���������� �������� ���������� �����

    std::cout << "\t" << "���������� ���������� ����� ���������" << std::endl;
    int* print;
    int A = 0;
    print = &A;
    std::cout << *print << std::endl;
    std::cout << "\t" << "���������� � ������ sizeof" << std::endl;
    std::cout << sizeof(print) << std::endl; //��������� ������ ������� � ������ ( � ������ ������ ���������)
    std::cout << sizeof(*print) << std::endl; // � ������ ������ ���������� ������ ���������� � ������
    std::cout << "\t\t\t\t\t\t\t" << "�������" << std::endl;
    int massiv[3] = { 0,5,6 };// �������� ������ ������ ����������� �������
    std::cout << massiv[0] << massiv[1] << massiv[2] << std::endl; // ���������� ����������� ������� ��� �������������

   // ������ ������ �������� ��� ������ ����������, ��� ����� ������ � ������������ ������

    std::cout << "\t" << "��������� ������/������� � ����������" << std::endl;
    int massiv2[3][3];
    for (int i = 0; i < 3; ++i) { // ������� ��� ���������� ��������
        for (int j = 0; j < 3; ++j) { // ������� ��� ���������� �����
            std::cin >> massiv2[i][j];
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j) {
            std::cout << massiv2[i][j] << "\t"; // ����� ���������� (������ ��� ������-�����)
        }
        std::cout << std::endl; // �������
    }
    std::cout << "\t" << " ����� �������� ������� � �������� 1/1 = " << massiv2[1][1] << std::endl; // ����� ������������ �������� �������

     //���� ������ ����� �� ������� �������, �� �� �������� ��� �������

     //���� ������ ����� �� ������� �������, �� �� �� ������ ������� ������ � ������ ������

    std::cout << "\t" << "�������� ������ ��� ������� ������� " << std::endl;
    int nomer; int nomer2; std::cin >> nomer; std::cin >> nomer2;
    int* vivod; int* vivod2;  vivod = &nomer; vivod2 = &nomer2;
    std::cout << " ����� �������� ������� c  ��������� ���������=" << massiv2[*vivod][*vivod2] << std::endl; // ���������� �������� ������� � ����������
    std::cout << "\t" << "�c����������� ��������� ��� ���������� �������� �������" << std::endl;
    int forymmasiv[6] = { 1,2,3,4,5,6 };
    std::cout << "���������:\t" << forymmasiv << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cout << "����� ��������: " << forymmasiv + i << "/t";
        std::cout << "��������:" << *(forymmasiv + i) << std::endl;
    }
    int forymmasiv2[2][2] = { {1,2},{3,4} };
    std::cout << "\n";
    std::cout << "��������� 2 :\t" << forymmasiv2 << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int h = 0; h < 2; h++) {
            std::cout << "����� ��������: " << forymmasiv2 + i << "\t";
            std::cout << "��������:" << *(*(forymmasiv2 + h) + i) << std::endl;
        }
    }
    std::cout << "\t" << "������ � ����� ���������� ��������� " << std::endl;
    int massiv3[10][10];
    for (int l = 0; l < 10; ++l) { // � ��� ����� ������������� �������  �������
        for (int h = 0; h <= l; ++h) { // ������� ��� ���������� �������
            massiv3[l][h] = h + 1;
            std::cout << massiv3[l][h] << "\t";
        }
        for (int h = 10; h > l; --h) {
            massiv3[l][h] = h == 0;

            std::cout << massiv3[l][h] << "\t";

        }

        std::cout << std::endl;
    }
std::system("pause"); // ����� ������� system() �� ����������� ����������
    return 0;
}