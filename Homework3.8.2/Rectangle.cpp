#include "Rectangle.h"

void Rectangle::check()
{
    if (a != c && b != d && A != 90 && B != A && C != A && D != A)
    {
        throw std::domain_error("������� � � � �� ����� �/��� ������� b � d �� ����� �/��� ���� �� ����� 90");
    }
}
void Rectangle::print_info()
{
    if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90)
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