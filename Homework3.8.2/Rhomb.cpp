#include "Rhomb.h"

bool Rhomb::check()
{
    if (a == b && b == c && c == d && a == c && a == d && b == d && A == C && B == D)
    {
        return true;
    }
    else { throw std::domain_error("������� �� ����� �/��� ���� A � C �� ����� �/��� ���� B � D �� �����"); }
}
void Rhomb::print_info()
{
    Parallelogram::print_info();
}