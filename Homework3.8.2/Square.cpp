#include "Square.h"

void Square::check()
{
    if (a != b && b != c && c != d && a != c && a != d && b != d && A != 90 && B != 90 && C != 90 && D != 90)
    {
        throw std::domain_error("������� �� ����� �/��� ���� �� ����� 90");
    }
}
void Square::print_info()
{
    if (a == b && b == c && c == d && a == c && a == d && b == d && A == 90 && B == 90 && C == 90 && D == 90)
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