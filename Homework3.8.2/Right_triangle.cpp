#include "Right_triangle.h"

bool Right_triangle::check()
{
    if (C == 90)
    {
        return true;
    }
    else { throw std::domain_error("���� � �� ����� 90"); }
}
void Right_triangle::print_info()
{
    Triangle::print_info();
}