#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a, int b, int A, int B) : Quadrangle(a, A)
    {
        name = "��������������";
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
    void check();
    void print_info();
};