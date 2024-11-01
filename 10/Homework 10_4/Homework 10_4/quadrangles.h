#pragma once

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif

#include "figure.h"

namespace figures_lib
{
    class Quadrangle : public Figure
    {
    public:
        Quadrangle(int set_a, int set_b, int set_c, int set_d, int set_A, int set_B, int set_C, int set_D)
        {
            a = set_a;
            b = set_b;
            c = set_c;
            d = set_d;
            A = set_A;
            B = set_B;
            C = set_C;
            D = set_D;
            sidesAmount = 4;
            figuresName = "Четырёхугольник";
        }
    };

    class Rectangle : public Quadrangle
    {
    public:
        Rectangle(int a, int b) : Quadrangle(a, b, c, d, A, B, C, D)
        {
            a = a;
            b = b;
            c = a;
            d = b;
            A = 90;
            B = A;
            C = A;
            D = A;
            sidesAmount = 4;
            figuresName = "Прямоугольник";
        }
    };

    class Square : public Quadrangle
    {
    public:
        Square(int a) : Quadrangle(a, b, c, d, A, B, C, D)
        {
            a = a;
            b = a;
            c = a;
            d = a;
            A = 90;
            B = A;
            C = A;
            D = A;
            sidesAmount = 4;
            figuresName = "Квадрат";
        }
    };

    class Parallelogram : public Quadrangle
    {
    public:
        Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, c, d, A, B, C, D)
        {
            a = a;
            b = b;
            c = a;
            d = b;
            A = A;
            B = B;
            C = A;
            D = B;
            sidesAmount = 4;
            figuresName = "Параллелограмм";
        }
    };

    class Rhombus : public Quadrangle
    {
    public:
        Rhombus(int a, int A, int B) : Quadrangle(a, b, c, d, A, B, C, D)
        {
            a = a;
            b = a;
            c = a;
            d = a;
            A = A;
            B = B;
            C = A;
            D = B;
            sidesAmount = 4;
            figuresName = "Ромб";
        }
    };
}
