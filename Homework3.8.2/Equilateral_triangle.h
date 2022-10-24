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

        print_info();

        /*if (a == b && b == c && a == c && A == 60 && B == 60 && C == 60)
        {
            std::cout << get_name();
            std::cout << " (стороны " << get_a() << ", " << get_b() << ", " << get_c() << "; ";
            std::cout << "углы " << get_A() << ", " << get_B() << ", " << get_C() << ") ";
            std::cout << "создан" << std::endl;
        }
        else 
        { 
            std::cout << get_name();
            std::cout << " (стороны " << get_a() << ", " << get_b() << ", " << get_c() << "; ";
            std::cout << "углы " << get_A() << ", " << get_B() << ", " << get_C() << ") ";
            throw std::domain_error("все стороны не равны и/или все углы не равны 60"); 
        }*/
    }
    void check();
    void print_info();
};