#include "Parallelogram.h"

void Parallelogram::check()
{
    if (a != c && b != d && A != C && B != D)
    {
        throw std::domain_error("стороны а и с не равны и/или стороны b и d не равны и/или углы А и С не равны и/или углы B и D не равны");
    }
}
void Parallelogram::print_info()
{
    if (a == c && b == d && A == C && B == D)
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