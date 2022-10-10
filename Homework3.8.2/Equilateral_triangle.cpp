#include "Equilateral_triangle.h"

bool Equilateral_triangle::check()
{
    if (a == b && b == c && a == c && A == 60 && B == 60 && C == 60)
    {
        return true;
    }
    else { return false; }
}
void Equilateral_triangle::print_info()
{
    Triangle::print_info();
}