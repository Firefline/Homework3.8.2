#pragma once
#include "Triangle.h"

class Equilateral_triangle : public Triangle
{
public:
    Equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60)
    {
        name = "Равносторонний треугольник";
        sides_count = 3;
        this->a = a;
        b = a;
        c = a;
        A = 60;
        B = A;
        C = A;

        check();
    }
    void check();
    void print_info();
};