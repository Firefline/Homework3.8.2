#include "Isosceles_triangle.h"

void Isosceles_triangle::check()
{
    if (a != c && A != C)
    {
        throw std::domain_error("стороны а и с не равны и/или углы ј и — не равны");
    }
}

void Isosceles_triangle::print_info()
{
    if (c == a && C == A)
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
        std::cout << "не создан, причина - " << std::endl;
    }
}