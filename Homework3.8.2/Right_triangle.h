#pragma once
#include <iostream>
#include "Triangle.h"

class Right_triangle : public Triangle
{
public:
    Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
    {
        name = "Прямоугольный треугольник";
        sides_count = 3;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        C = 90;

        print_info();
    }
    //void check();
    void print_info();
};
