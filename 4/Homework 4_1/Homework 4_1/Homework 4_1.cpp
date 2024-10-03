#include <iostream>


class Figure
{
protected:
    int sidesAmount = 0;
    std::string figuresName = "Фигура";
public:
    int get_sides() { return sidesAmount; }
    void print_figures_sides() { std::cout << figuresName << ": " << sidesAmount << std::endl; }
};
class Triangle : public Figure
{
public:
    Triangle()
    {
        sidesAmount = 3;
        figuresName = "Треугольник";
    }
};
class Quadrangle : public Figure
{
public:
    Quadrangle()
    {
        sidesAmount = 4;
        figuresName = "Четырёхугольник";
    }
};


int main()
{
    setlocale(LC_CTYPE, "rus");
    Figure figure;
    Triangle triangle;
    Quadrangle quardangle;
    std::cout << "Количество сторон:\n";
    figure.print_figures_sides();
    triangle.print_figures_sides();
    quardangle.print_figures_sides();
    return 0;
}

