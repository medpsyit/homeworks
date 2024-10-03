#include <iostream>

class Figure
{
protected:
    int sidesAmount = 0;
    std::string figuresName = "Фигура";
    int a{}, b{}, c{}, d = 0;
    int A{}, B{}, C{}, D = 0;
public:
    Figure() {}
    int get_sides() { return sidesAmount; }
    virtual void check_figure()
    {
        if (sidesAmount == 0)
        {
            std::cout << "Правильная" << std::endl;
        } else { std::cout << "Неправильная" << std::endl; }
    }
    virtual void print_info()
    {
        std::cout << figuresName << ": " << std::endl;
        check_figure();
        std::cout << "Количество сторон: " << sidesAmount << std::endl;
    }
};

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
    void check_figure() override
    {
        if (d == 0 && (A + B + C == 180))
        {

            std::cout << "Правильная" << std::endl;
        }
        else { std::cout << "Неправильная" << std::endl; }
    }
    void print_info() override
    {
        Figure::print_info();
        std::cout << "Стороны: a = " << a << ", b = " << b << ", c = " << c << std::endl;
        std::cout << "Углы: А = " << A << ", B = " << B << ", C = " << C << '\n' << std::endl;
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
    void check_figure() override
    {
        if (d == 0 && C == 90)
        {

            std::cout << "Правильная" << std::endl;
        }
        else { std::cout << "Неправильная" << std::endl; }
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
    void check_figure() override
    {
        if (d == 0 && a == c && A == C)
        {

            std::cout << "Правильная" << std::endl;
        }
        else { std::cout << "Неправильная" << std::endl; }
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
    void check_figure() override
    {
        if (d == 0 && (a == b && a == c) && (A == 60 && B == 60 && C == 60))
        {

            std::cout << "Правильная" << std::endl;
        }
        else { std::cout << "Неправильная" << std::endl; }
    }
};

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
    void check_figure() override
    {
        if (d != 0 && (A + B + C + D == 360))
        {

            std::cout << "Правильная" << std::endl;
        }
        else { std::cout << "Неправильная" << std::endl; }
    }
    void print_info() override
    {
        Figure::print_info();
        std::cout << "Стороны: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
        std::cout << "Углы: А = " << A << ", B = " << B << ", C = " << C << ", D = " << D << '\n' << std::endl;
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

    void check_figure() override
    {
        if ((a == c && b == d) && (A == 90 && B == 90 && C == 90 && D == 90))
        {

            std::cout << "Правильная" << std::endl;
        }
        else { std::cout << "Неправильная" << std::endl; }
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
    void check_figure() override
    {
        if ((a == b && b == c && c == d) && (A == 90 && B == 90 && C == 90 && D == 90))
        {

            std::cout << "Правильная" << std::endl;
        }
        else { std::cout << "Неправильная" << std::endl; }
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
    void check_figure() override
    {
        if ((a == c && b == d) && (A == C && B == D))
        {

            std::cout << "Правильная" << std::endl;
        }
        else { std::cout << "Неправильная" << std::endl; }
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
    void check_figure() override
    {
        if ((a == b && b == c && c == d) && (A == C && B == D))
        {

            std::cout << "Правильная" << std::endl;
        }
        else { std::cout << "Неправильная" << std::endl; }
    }
};

//__________________________________________________________________________________________main_______________________________________________________________________________________________________
int main()
{
    setlocale(LC_CTYPE, "rus");
    Figure figure;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Right_Triangle right(10, 20, 30, 80, 30);
    Isosceles_Triangle isosceles(10, 20, 30, 40);
    Equilateral_Triangle equial(10);
    Quadrangle quardangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(10);
    Parallelogram paral(10, 20, 50, 60);
    Rhombus rhombus(10, 50, 60);
    triangle.print_info();
    right.print_info();
    isosceles.print_info();
    equial.print_info();
    quardangle.print_info();
    rectangle.print_info();
    square.print_info();
    paral.print_info();
    rhombus.print_info();
    return 0;
}

