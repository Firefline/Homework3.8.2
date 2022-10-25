#include "Rectangle.h"

void Rectangle::check()
{
    if (a != c && b != d && A != 90 && B != A && C != A && D != A)
    {
        throw std::domain_error("стороны а и с не равны и/или стороны b и d не равны и/или углы не равны 90");
    }
}
void Rectangle::print_info()
{
    if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90)
    {
        Figure::print_info();
        std::cout << " (стороны " << get_a() << ", " << get_b() << ", " << get_c() << ", " << get_d() << "; ";
        std::cout << "углы " << get_A() << ", " << get_B() << ", " << get_C() << ", " << get_D() << ") ";
        std::cout << "создан" << std::endl;
    }
    else
    {
        Figure::print_info();
        std::cout << " (стороны " << get_a() << ", " << get_b() << ", " << get_c() << ", " << get_d() << "; ";
        std::cout << "углы " << get_A() << ", " << get_B() << ", " << get_C() << ", " << get_D() << ") ";
        std::cout << "не создан, причина - " << std::endl;
    }
}