#include <iostream>
#include "info.h"

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