#include "Rectangle.h"

bool Rectangle::check()
{
    if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90)
    {
        return true;
    }
    else { throw std::domain_error("������� � � � �� ����� �/��� ������� b � d �� ����� �/��� ���� �� ����� 90"); }
}
void Rectangle::print_info()
{
    Parallelogram::print_info();
}