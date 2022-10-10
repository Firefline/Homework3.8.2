#pragma once
#include "Quadrangle.h"

class Square : public Quadrangle
{
public:
    Square(int a) : Quadrangle(0, 0)
    {
        name = " вадрат";
        sides_count = 4;
        this->a = a;
        b = a;
        c = a;
        d = a;
        A = 90;
        B = A;
        C = A;
        D = A;
    }
    bool check();
    void print_info();
};