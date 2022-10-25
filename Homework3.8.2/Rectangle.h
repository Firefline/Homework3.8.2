#pragma once
#include "Parallelogram.h"

class Rectangle : public Parallelogram
{
public:
    Rectangle(int a, int b) : Parallelogram(a, b, A, A)
    {
        name = "Прямоугольник";
        sides_count = 4;
        this->a = a;
        this->b = b;
        c = a;
        d = b;
        A = 90;
        B = A;
        C = A;
        D = A;

        check();
    }
    void check();
    void print_info();
};