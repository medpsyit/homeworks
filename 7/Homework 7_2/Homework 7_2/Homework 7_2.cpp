#include <iostream>
#include "triangles.h"
#include "quadrangles.h"
#include "exceptions.h"

int main()
{
    setlocale(LC_CTYPE, "rus");
    try
    {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        triangle.print_info_figure();
        Right_Triangle right(10, 20, 30, 60, 30, 90);
        right.print_info_figure();
        Isosceles_Triangle isosceles(10, 20, 10, 30, 120, 30);
        isosceles.print_info_figure();
        Equilateral_Triangle equial(10, 10, 10, 60, 60, 60);
        equial.print_info_figure();
        Quadrangle quardangle(10, 20, 30, 40, 50, 160, 70, 80);
        quardangle.print_info_figure();
        Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        rectangle.print_info_figure();
        Square square(20, 20, 20, 20, 90, 90, 90, 90);
        square.print_info_figure();
        Parallelogram paral(30, 40, 30, 40, 60, 120, 60, 120);
        paral.print_info_figure();
        Rhombus rhombus(10, 20, 10, 10, 70, 100, 70, 110);
        rhombus.print_info_figure();
    }
    
    catch (Restrictions& ex) { std::cout << ex.what() << std::endl; }

    return 0;
}
