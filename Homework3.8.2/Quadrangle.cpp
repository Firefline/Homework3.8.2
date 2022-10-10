#include "Quadrangle.h"

bool Quadrangle::check()
{
    if (sides_count == 4 && (A + B + C + D == 360))
    {
        return true;
    }
    else { return false; }
}
void Quadrangle::print_info()
{
    Figure::print_info();
    std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
    std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
    std::cout << std::endl;
}