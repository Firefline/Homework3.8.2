#include "Square.h"

char Square::check()
{
    if (a == b && b == c && c == d && a == c && a == d && b == d && A == 90 && B == 90 && C == 90 && D == 90)
    {
        std::cout << "создан" << std::endl;
    }
    else { throw std::domain_error("стороны не равны и/или углы не равны 90"); }
}
void Square::print_info()
{
    Quadrangle::print_info();
}