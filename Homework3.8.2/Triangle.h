#pragma once
#include <iostream>
#include "Figure.h"
#include "domain_error.h"

class Triangle : public Figure
{
public:
    //void check();
    void print_info();
    Triangle(int a, int b, int c, int A, int B, int C) : Figure()
    {
        name = "Треугольник";
        sides_count = 3;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;

        print_info();
    }
};