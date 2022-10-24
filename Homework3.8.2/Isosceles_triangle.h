#pragma once
#include "Triangle.h"

class Isosceles_triangle : public Triangle
{
public:
    Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A)
    {
        name = "Равнобедренный треугольник";
        sides_count = 3;
        this->a = a;
        this->b = b;
        c = a;
        this->A = A;
        this->B = B;
        C = A;
    }
    void check();
    void print_info();
};
