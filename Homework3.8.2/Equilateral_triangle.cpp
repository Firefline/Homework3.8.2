#include "Equilateral_triangle.h"

void Equilateral_triangle::check()
{
    if (a == b && b == c && a == c && A == 60 && B == 60 && C == 60)
    {
        std::cout << "������" << std::endl;
    }
    else { throw std::domain_error("��� ������� �� ����� �/��� ��� ���� �� ����� 60"); }
}
void Equilateral_triangle::print_info()
{
    Triangle::print_info();
}