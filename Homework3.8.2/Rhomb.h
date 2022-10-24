#pragma once
#include "Parallelogram.h"

class Rhomb : public Parallelogram
{
public:
    Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B)
    {
        name = "Ромб";
        sides_count = 4;
        this->a = a;
        b = a;
        c = a;
        d = a;
        this->A = A;
        this->B = B;
        C = A;
        D = B;
    }
    void check();
    void print_info();
};