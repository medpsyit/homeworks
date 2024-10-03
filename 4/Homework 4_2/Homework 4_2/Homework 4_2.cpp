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
    std::string get_name() { return figuresName; }
    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    int get_D() { return D; }
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
    Rectangle(int a, int b) : Quadrangle (a, b, c, d, A, B, C, D)
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

void print_info(Figure& figure)
{
    if (figure.get_d() == 0)
    {
        std::cout << figure.get_name() << ":\nСтороны: a = " << figure.get_a() << ", b = " << figure.get_b() << ", c = " << figure.get_c() << std::endl;
        std::cout << "Углы: А = " << figure.get_A() << ", B = " << figure.get_B() << ", C = " << figure.get_C() << '\n' << std::endl;
    }
    else
    {
        std::cout << figure.get_name() << ":\nСтороны: a = " << figure.get_a() << ", b = " << figure.get_b() << ", c = " << figure.get_c() << ", d = " << figure.get_d() << std::endl;
        std::cout << "Углы: А = " << figure.get_A() << ", B = " << figure.get_B() << ", C = " << figure.get_C() << ", D = " << figure.get_D() << '\n' << std::endl;
    }
}

//__________________________________________________________________________________________main_______________________________________________________________________________________________________
int main()
{
    setlocale(LC_CTYPE, "rus");
    Figure figure;
    Triangle triangle (10, 20, 30, 50, 60, 70);
    Right_Triangle right (10, 20, 30, 80, 30);
    Isosceles_Triangle isosceles (10, 20, 30, 40);
    Equilateral_Triangle equial(10);
    Quadrangle quardangle (10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(10);
    Parallelogram paral(10, 20, 50, 60);
    Rhombus rhombus(10, 50, 60);
    print_info(triangle);
    print_info(right);
    print_info(isosceles);
    print_info(equial);
    print_info(quardangle);
    print_info(rectangle);
    print_info(square);
    print_info(paral);
    print_info(rhombus);
    return 0;
}



