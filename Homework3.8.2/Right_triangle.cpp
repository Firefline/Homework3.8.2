#include "Right_triangle.h"

void Right_triangle::check()
{
    if (C == 90)
    {
        std::cout << "������" << std::endl;
    }
    else { throw std::domain_error("���� � �� ����� 90"); }
}
void Right_triangle::print_info()
{
    Triangle::print_info();
}