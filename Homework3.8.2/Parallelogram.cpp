#include "Parallelogram.h"

void Parallelogram::check()
{
    if (a == c && b == d && A == C && B == D)
    {
        std::cout << "������" << std::endl;
    }
    else { throw std::domain_error("������� � � � �� ����� �/��� ������� b � d �� ����� �/��� ���� � � � �� ����� �/��� ���� B � D �� �����"); }
}
void Parallelogram::print_info()
{
    Quadrangle::print_info();
}