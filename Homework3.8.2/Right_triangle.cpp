#include "Right_triangle.h"

void Right_triangle::check()
{
    if (C != 90)
    {
        throw std::domain_error("���� � �� ����� 90");
    }
}

void Right_triangle::print_info()
{
    if (C == 90)
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