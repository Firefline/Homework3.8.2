#include "Figure.h"
#include "Triangle.h"
#include "domain_error.h"

char Triangle::check()
    {
        if (sides_count == 3 && (A + B + C == 180))
        {
            std::cout << "создан" << std::endl;
        }
        else { throw std::domain_error("неверное количество сторон у треугольника и/или количество сторон не равно 3"); }
    }
    void Triangle::print_info()
    {
        Figure::print_info();
        std::cout << " (стороны " << get_a() << ", " << get_b() << ", " << get_c() << "; ";
        std::cout << "углы " << get_A() << ", " << get_B() << ", " << get_C() << ") ";
    }