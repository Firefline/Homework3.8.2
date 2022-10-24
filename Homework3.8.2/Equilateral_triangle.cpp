#include "Equilateral_triangle.h"

void Equilateral_triangle::check()
{
    if (a == b && b == c && a == c && A == 60 && B == 60 && C == 60)
    {
        std::cout << "создан" << std::endl;
    }
    else { throw std::domain_error("все стороны не равны и/или все углы не равны 60"); }
}
void Equilateral_triangle::print_info()
{
    //Triangle::print_info();
    if (a == b && b == c && a == c && A == 60 && B == 60 && C == 60)
    {
        std::cout << get_name();
        std::cout << " (стороны " << get_a() << ", " << get_b() << ", " << get_c() << "; ";
        std::cout << "углы " << get_A() << ", " << get_B() << ", " << get_C() << ") ";
        std::cout << "создан" << std::endl;
    }
    else
    {
        std::cout << get_name();
        std::cout << " (стороны " << get_a() << ", " << get_b() << ", " << get_c() << "; ";
        std::cout << "углы " << get_A() << ", " << get_B() << ", " << get_C() << ") ";
        throw std::domain_error("все стороны не равны и/или все углы не равны 60");
    }
}