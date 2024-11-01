#pragma once

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif

#include <iostream>

namespace figures_lib
{
    class Figure
    {
    protected:
        int sidesAmount = 0;
        std::string figuresName = "Фигура";
        int a{}, b{}, c{}, d = 0;
        int A{}, B{}, C{}, D = 0;
    public:
        FIGURES_API int get_sides();
        FIGURES_API std::string get_name();
        FIGURES_API int get_a();
        FIGURES_API int get_b();
        FIGURES_API int get_c();
        FIGURES_API int get_d();
        FIGURES_API int get_A();
        FIGURES_API int get_B();
        FIGURES_API int get_C();
        FIGURES_API int get_D();
    };
}
