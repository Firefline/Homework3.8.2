#pragma once
#include <iostream>
class Figure
{
protected:
    std::string name = "Фигура";
    int sides_count = 0;
    int a = 0, b = 0, c = 0, d = 0;
    int A = 0, B = 0, C = 0, D = 0;
public:
    std::string get_name();
    int get_sides_count();
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();
    virtual bool check();
    virtual void print_info();
};