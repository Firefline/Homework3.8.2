#include "Equilateral_triangle.h"

bool Equilateral_triangle::check()
{
    if (a == b && b == c && a == c && A == 60 && B == 60 && C == 60)
    {
        return true;
    }
    else { throw std::domain_error("все стороны не равны и/или все углы не равны 60"); }
}
void Equilateral_triangle::print_info()
{
    Triangle::print_info();
}