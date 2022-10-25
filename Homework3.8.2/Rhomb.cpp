#include "Rhomb.h"

void Rhomb::check()
{
    if (a != b && b != c && c != d && a != c && a != d && b != d && A != C && B != D)
    {
        throw std::domain_error("стороны не равны и/или углы A и C не равны и/или углы B и D не равны");
    }
}
void Rhomb::print_info()
{
    if (a == b && b == c && c == d && a == c && a == d && b == d && A == C && B == D)
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