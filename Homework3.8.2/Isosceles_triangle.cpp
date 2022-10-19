#include "Isosceles_triangle.h"

void Isosceles_triangle::check()
{
    if (a == c && A == C)
    {
        std::cout << "создан" << std::endl;
    }
    else { throw std::domain_error("стороны а и с не равны и/или углы А и С не равны"); }
}
void Isosceles_triangle::print_info()
{
    Triangle::print_info();
}