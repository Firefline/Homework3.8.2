#include "Parallelogram.h"

void Parallelogram::check()
{
    if (a == c && b == d && A == C && B == D)
    {
        std::cout << "создан" << std::endl;
    }
    else { throw std::domain_error("стороны а и с не равны и/или стороны b и d не равны и/или углы ј и — не равны и/или углы B и D не равны"); }
}
void Parallelogram::print_info()
{
    Quadrangle::print_info();
}