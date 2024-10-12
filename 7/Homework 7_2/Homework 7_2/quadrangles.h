#pragma once
#include "figure.h"

class Quadrangle : public Figure
{
public:
    Quadrangle() {}
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
        check_conditions();
    }
    void check_conditions() override;
    void print_info_figure() override;
};

class Rectangle : public Quadrangle
{
public:
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
    {
        a = a;
        b = b;
        c = c;
        d = d;
        A = A;
        B = B;
        C = C;
        D = D;
        sidesAmount = 4;
        figuresName = "Прямоугольник";
        check_conditions();
    }
    void check_conditions() override;
};

class Square : public Quadrangle
{
public:
    Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
    {
        a = a;
        b = b;
        c = c;
        d = d;
        A = A;
        B = B;
        C = C;
        D = D;
        sidesAmount = 4;
        figuresName = "Квадрат";
        check_conditions();
    }
    void check_conditions() override;
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
    {
        a = a;
        b = b;
        c = c;
        d = d;
        A = A;
        B = B;
        C = C;
        D = D;
        sidesAmount = 4;
        figuresName = "Параллелограмм";
        check_conditions();
    }
    void check_conditions() override;
};

class Rhombus : public Quadrangle
{
public:
    Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
    {
        a = a;
        b = b;
        c = c;
        d = d;
        A = A;
        B = B;
        C = C;
        D = D;
        sidesAmount = 4;
        figuresName = "Ромб";
        check_conditions();
    }
    void check_conditions() override;
};
