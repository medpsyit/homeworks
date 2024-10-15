#pragma once

class Figure
{
protected:
    int sidesAmount = 0;
    std::string figuresName = "Фигура";
    int a{}, b{}, c{}, d = 0;
    int A{}, B{}, C{}, D = 0;
public:
    Figure();
    int get_sides();
    std::string get_name();
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();
};
