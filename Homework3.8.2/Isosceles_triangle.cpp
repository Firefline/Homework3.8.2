#include "Isosceles_triangle.h"

bool Isosceles_triangle::check()
{
    if (a == c && A == C)
    {
        return true;
    }
    else { return false; }
}
void Isosceles_triangle::print_info()
{
    Triangle::print_info();
}