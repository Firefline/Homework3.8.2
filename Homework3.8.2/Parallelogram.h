#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a, int b, int A, int B) : Quadrangle(0, 0)
    {
        name = "ֿאנאככוכמדנאלל";
        sides_count = 4;
        this->a = a;
        this->b = b;
        c = a;
        d = b;
        this->A = A;
        this->B = B;
        C = A;
        D = B;
    }
    bool check();
    void print_info();
};