#pragma once
#include "Parallelogram.h"

class Rhomb : public Parallelogram
{
public:
    Rhomb(int a, int A, int B) : Parallelogram(0, 0, 0, 0)
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
    bool check();
    void print_info();
};