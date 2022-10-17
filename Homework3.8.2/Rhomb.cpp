#include "Rhomb.h"

char Rhomb::check()
{
    if (a == b && b == c && c == d && a == c && a == d && b == d && A == C && B == D)
    {
        std::cout << "создан" << std::endl;
    }
    else { throw std::domain_error("стороны не равны и/или углы A и C не равны и/или углы B и D не равны"); }
}
void Rhomb::print_info()
{
    Parallelogram::print_info();
}