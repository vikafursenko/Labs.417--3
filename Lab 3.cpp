#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
#include<iostream>

int main()
{
    std::cout << "\t\t\t\t\t\t\t" << "Указатель и действия с ним" << std::endl;
    setlocale(LC_ALL, "Russian");
    //int *print_int;

    //нельзя распечатать переменную которую неинициализирована
    //std::cout<<print_int<<std::endl; // показывает номер в программе
//std::cout<<*print_int<<std::endl; //показывает значение переменной принт

    std::cout << "\t" << "Запринтили переменную через указатель" << std::endl;
    int* print;
    int A = 0;
    print = &A;
    std::cout << *print << std::endl;
    std::cout << "\t" << "Распечатка в режиме sizeof" << std::endl;
    std::cout << sizeof(print) << std::endl; //возращает размер объекта в байтах ( в данном случае указателя)
    std::cout << sizeof(*print) << std::endl; // в данном случае возвращает размер переменной в байтах
    std::cout << "\t\t\t\t\t\t\t" << "Массивы" << std::endl;
    int massiv[3] = { 0,5,6 };// создание самого просто одномерного массива
    std::cout << massiv[0] << massiv[1] << massiv[2] << std::endl; // распечатка одномерного массива без инициализации

   // массив нельзя объявить при помощи переменной, это будет поздже в динамической памяти

    std::cout << "\t" << "Двумерный массив/матрица с клавиатуры" << std::endl;
    int massiv2[3][3];
    for (int i = 0; i < 3; ++i) { // счётчик для заполнения столбцов
        for (int j = 0; j < 3; ++j) { // счётчик для заполнения строк
            std::cin >> massiv2[i][j];
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j) {
            std::cout << massiv2[i][j] << "\t"; // вывод массивчика (именно эта строка-строк)
        }
        std::cout << std::endl; // столбцы
    }
    std::cout << "\t" << " Вывод элемента массива с индексом 1/1 = " << massiv2[1][1] << std::endl; // вывод определённого элемента массива

     //если слегка выйти за границы массива, то он заполнит его мусором

     //если сильно выйти за пределы массива, то он не сможет вывести ничего и выдаст ошибку

    std::cout << "\t" << "Выберите нужный вам элемент массива " << std::endl;
    int nomer; int nomer2; std::cin >> nomer; std::cin >> nomer2;
    int* vivod; int* vivod2;  vivod = &nomer; vivod2 = &nomer2;
    std::cout << " Вывод элемента массива c  выбранным элементом=" << massiv2[*vivod][*vivod2] << std::endl; // распечатка элемента массива с клавиатуры
    std::cout << "\t" << "Иcпользование формулами для нахождение элемента массива" << std::endl;
    int forymmasiv[6] = { 1,2,3,4,5,6 };
    std::cout << "Указатель:\t" << forymmasiv << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cout << "Адрес значения: " << forymmasiv + i << "/t";
        std::cout << "Значение:" << *(forymmasiv + i) << std::endl;
    }
    int forymmasiv2[2][2] = { {1,2},{3,4} };
    std::cout << "\n";
    std::cout << "Указатель 2 :\t" << forymmasiv2 << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int h = 0; h < 2; h++) {
            std::cout << "Адрес значения: " << forymmasiv2 + i << "\t";
            std::cout << "Значение:" << *(*(forymmasiv2 + h) + i) << std::endl;
        }
    }
    std::cout << "\t" << "Массив в форме квадратной пирамидки " << std::endl;
    int massiv3[10][10];
    for (int l = 0; l < 10; ++l) { // в это цикле перечисляются столбцы  массива
        for (int h = 0; h <= l; ++h) { // счётчик для заполнения строчек
            massiv3[l][h] = h + 1;
            std::cout << massiv3[l][h] << "\t";
        }
        for (int h = 10; h > l; --h) {
            massiv3[l][h] = h == 0;

            std::cout << massiv3[l][h] << "\t";

        }

        std::cout << std::endl;
    }
std::system("pause"); // вызов функции system() из стандартной библиотеки
    return 0;
}