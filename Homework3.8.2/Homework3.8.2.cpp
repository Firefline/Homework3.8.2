// Homework3.8.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "domain_error.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    try
    {
        //Figure figure;
        Triangle triangle(10, 20, 30, 50, 60, 70);
        //Right_triangle right_triangle(10, 20, 30, 50, 60);
        //Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
        Equilateral_triangle equilateral_triangle(30);
        //Quadrangle quadrangle(10, 20);
        //Square square(20);
        //Parallelogram parallelogram(20, 30, 30, 40);
        //Rectangle rectangle(10, 20);
        //Rhomb rhomb(30, 30, 40);
    }
    catch (const std::exception& error)
    {
        std::cout << "не создан, причина - " << error.what() << std::endl;
    }
    return 0;
}
   

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
