#include "Parallelogram.h"

bool Parallelogram::check()
{
    if (a == c && b == d && A == C && B == D)
    {
        return true;
    }
    else { throw std::domain_error("������� � � � �� ����� �/��� ������� b � d �� ����� �/��� ���� � � � �� ����� �/��� ���� B � D �� �����"); }
}
void Parallelogram::print_info()
{
    Quadrangle::print_info();
}