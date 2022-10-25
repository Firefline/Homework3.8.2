#include "Quadrangle.h"

void Quadrangle::check()
{
    if (sides_count != 4 && (A + B + C + D != 360))
    {
        throw std::domain_error("���������� ������ �� ����� 4 �/��� ����� ����� �� ����� 360");
    }
}
void Quadrangle::print_info()
{
    if (sides_count == 4 && (A + B + C + D == 360))
    {
        Figure::print_info();
        std::cout << " (������� " << get_a() << ", " << get_b() << ", " << get_c() << ", " << get_d() << "; ";
        std::cout << "���� " << get_A() << ", " << get_B() << ", " << get_C() << ", " << get_D() << ") ";
        std::cout << "������" << std::endl;
    }
    else 
    { 
        Figure::print_info();
        std::cout << " (������� " << get_a() << ", " << get_b() << ", " << get_c() << ", " << get_d() << "; ";
        std::cout << "���� " << get_A() << ", " << get_B() << ", " << get_C() << ", " << get_D() << ") ";
        std::cout << "�� ������, ������� - " << std::endl;
    }
}