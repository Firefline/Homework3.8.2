#include "Rhomb.h"

bool Rhomb::check()
{
    if (a == b && b == c && c == d && a == c && a == d && b == d && A == C && B == D)
    {
        return true;
    }
    else { return false; }
}
void Rhomb::print_info()
{
    Parallelogram::print_info();
}