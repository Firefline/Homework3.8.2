#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
public:
    Quadrangle(int a, int b) : Figure()
    {
        name = "Четырёхугольник";
        sides_count = 4;
        this->a = a;
        this->b = b;
        c = a;
        d = b;
        A = 90;
        B = A;
        C = A;
        D = A;
    }
    bool check();
    void print_info();
};