#include "Figure.h"
#include "domain_error.h"
    std::string Figure::get_name()
    {
        return name;
    }
    int Figure::get_sides_count()
    {
        return sides_count;
    }
    int Figure::get_a()
    {
        return a;
    }
    int Figure::get_b()
    {
        return b;
    }
    int Figure::get_c()
    {
        return c;
    }
    int Figure::get_d()
    {
        return d;
    }
    int Figure::get_A()
    {
        return A;
    }
    int Figure::get_B()
    {
        return B;
    }
    int Figure::get_C()
    {
        return C;
    }
    int Figure::get_D()
    {
        return D;
    }
    char Figure::check()
    {
        if (sides_count == 0)
        {
            std::cout << "создан";
        }
        else {
            throw domain_error();
        }
    }
    void Figure::print_info()
    {
        try
        {
            Figure::check();
        }
        catch (const domain_error& ex)
        {
            std::cout << ex.what() << "количество сторон не равно 0" << std::endl;
        }
        std::cout << "Количество сторон: " << get_sides_count() << std::endl;
    }