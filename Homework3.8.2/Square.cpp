#include "Square.h"

bool Square::check()
{
    if (a == b && b == c && c == d && a == c && a == d && b == d && A == 90 && B == 90 && C == 90 && D == 90)
    {
        return true;
    }
    else { return false; }
}
void Square::print_info()
{
    Quadrangle::print_info();
}