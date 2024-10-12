#pragma once
#include "figure.h"

class Triangle : public Figure
{
public:
    Triangle() {}
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
        check_conditions();
    }
    void check_conditions() override;
};

class Right_Triangle : public Triangle
{
public:
    Right_Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
    {
        a = a;
        b = b;
        c = c;
        A = A;
        B = B;
        C = C;
        sidesAmount = 3;
        figuresName = "Прямоугольный треугольник";
        check_conditions();
    }
    void check_conditions() override;
};

class Isosceles_Triangle : public Triangle
{
public:
    Isosceles_Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
    {
        a = a;
        b = b;
        c = c;
        A = A;
        B = B;
        C = C;
        sidesAmount = 3;
        figuresName = "Равнобедренный треугольник";
        check_conditions();
    }
    void check_conditions() override;
};

class Equilateral_Triangle : public Triangle
{
public:
    Equilateral_Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
    {
        a = a;
        b = b;
        c = c;
        A = A;
        B = B;
        C = C;
        sidesAmount = 3;
        figuresName = "Равносторонний треугольник";
        check_conditions();
    }
    void check_conditions() override;
};
