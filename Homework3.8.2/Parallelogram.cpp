#include "Parallelogram.h"

void Parallelogram::check()
{
    if (a != c && b != d && A != C && B != D)
    {
        throw std::domain_error("������� � � � �� ����� �/��� ������� b � d �� ����� �/��� ���� � � � �� ����� �/��� ���� B � D �� �����");
    }
}
void Parallelogram::print_info()
{
    if (a == c && b == d && A == C && B == D)
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