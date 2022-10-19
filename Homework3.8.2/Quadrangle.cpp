#include "Quadrangle.h"

void Quadrangle::check()
{
    if (sides_count == 4 && (A + B + C + D == 360))
    {
        std::cout << "создан" << std::endl;
    }
    else { throw std::domain_error("количество сторон не равно 4 и/или сумма углов не равно 360"); }
}
void Quadrangle::print_info()
{
    Figure::print_info();
    std::cout << " (стороны " << get_a() << ", " << get_b() << ", " << get_c() << ", " << get_d() << "; ";
    std::cout << "углы " << get_A() << ", " << get_B() << ", " << get_C() << ", " << get_D() << ") ";
}