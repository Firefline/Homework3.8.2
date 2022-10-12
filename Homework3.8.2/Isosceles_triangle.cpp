#include "Isosceles_triangle.h"

bool Isosceles_triangle::check()
{
    if (a == c && A == C)
    {
        return true;
    }
    else { throw std::domain_error("стороны а и с не равны и/или углы А и С не равны"); }
}
void Isosceles_triangle::print_info()
{
    Triangle::print_info();
}