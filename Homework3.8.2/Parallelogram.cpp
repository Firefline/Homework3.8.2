#include "Parallelogram.h"

bool Parallelogram::check()
{
    if (a == c && b == d && A == C && B == D)
    {
        return true;
    }
    else { return false; }
}
void Parallelogram::print_info()
{
    Quadrangle::print_info();
}