#pragma once
#include "Triangle.h"

class Equilateral_triangle : public Triangle
{
public:
    Equilateral_triangle(int a) : Triangle(0, 0, 0, 0, 0, 0)
    {
        name = "Равносторонний треугольник";
        sides_count = 3;
        this->a = a;
        b = a;
        c = a;
        A = 60;
        B = A;
        C = A;
    }
    bool check();
    void print_info();
};