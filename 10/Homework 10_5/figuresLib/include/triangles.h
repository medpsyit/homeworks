#pragma once

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif

#include "figure.h"

namespace figures_lib
{
    class Triangle : public Figure
    {
    public:
        Triangle(int set_a, int set_b, int set_c, int set_A, int set_B, int set_C)
        {
            a = set_a;
            b = set_b;
            c = set_c;
            A = set_A;
            B = set_B;
            C = set_C;
            sidesAmount = 3;
            figuresName = "Треугольник";
        }
    };

    class Right_Triangle : public Triangle
    {
    public:
        Right_Triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, C)
        {
            a = a;
            b = b;
            c = c;
            A = A;
            B = B;
            C = 90;
            sidesAmount = 3;
            figuresName = "Прямоугольный треугольник";
        }
    };

    class Isosceles_Triangle : public Triangle
    {
    public:
        Isosceles_Triangle(int a, int b, int A, int B) : Triangle(a, b, c, A, B, C)
        {
            a = a;
            b = b;
            c = a;
            A = A;
            B = B;
            C = A;
            sidesAmount = 3;
            figuresName = "Равнобедренный треугольник";
        }
    };

    class Equilateral_Triangle : public Triangle
    {
    public:
        Equilateral_Triangle(int a) : Triangle(a, b, c, A, B, C)
        {
            a = a;
            b = a;
            c = a;
            A = 60;
            B = A;
            C = A;
            sidesAmount = 3;
            figuresName = "Равносторонний треугольник";
        }
    };
}

