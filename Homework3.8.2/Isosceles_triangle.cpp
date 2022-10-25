#include "Isosceles_triangle.h"

void Isosceles_triangle::check()
{
    if (a != c && A != C)
    {
        throw std::domain_error("������� � � � �� ����� �/��� ���� � � � �� �����");
    }
}

void Isosceles_triangle::print_info()
{
    if (c == a && C == A)
    {
        std::cout << get_name();
        std::cout << " (������� " << get_a() << ", " << get_b() << ", " << get_c() << "; ";
        std::cout << "���� " << get_A() << ", " << get_B() << ", " << get_C() << ") ";
        std::cout << "������" << std::endl;
    }
    else
    {
        std::cout << get_name();
        std::cout << " (������� " << get_a() << ", " << get_b() << ", " << get_c() << "; ";
        std::cout << "���� " << get_A() << ", " << get_B() << ", " << get_C() << ") ";
        std::cout << "�� ������, ������� - " << std::endl;
    }
}