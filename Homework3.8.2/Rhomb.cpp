#include "Rhomb.h"

void Rhomb::check()
{
    if (a != b && b != c && c != d && a != c && a != d && b != d && A != C && B != D)
    {
        throw std::domain_error("������� �� ����� �/��� ���� A � C �� ����� �/��� ���� B � D �� �����");
    }
}
void Rhomb::print_info()
{
    if (a == b && b == c && c == d && a == c && a == d && b == d && A == C && B == D)
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