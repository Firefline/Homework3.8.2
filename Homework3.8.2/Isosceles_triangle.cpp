#include "Isosceles_triangle.h"

char Isosceles_triangle::check()
{
    if (a == c && A == C)
    {
        std::cout << "������" << std::endl;
    }
    else { throw std::domain_error("������� � � � �� ����� �/��� ���� � � � �� �����"); }
}
void Isosceles_triangle::print_info()
{
    Triangle::print_info();
}