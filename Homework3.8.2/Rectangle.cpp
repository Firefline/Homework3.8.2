#include "Rectangle.h"

void Rectangle::check()
{
    if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90)
    {
        std::cout << "создан" << std::endl;
    }
    else { throw std::domain_error("стороны а и с не равны и/или стороны b и d не равны и/или углы не равны 90"); }
}
void Rectangle::print_info()
{
    Parallelogram::print_info();
}