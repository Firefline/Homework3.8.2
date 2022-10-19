#include "Right_triangle.h"

void Right_triangle::check()
{
    if (C == 90)
    {
        std::cout << "создан" << std::endl;
    }
    else { throw std::domain_error("угол С не равен 90"); }
}
void Right_triangle::print_info()
{
    Triangle::print_info();
}