#include <iostream>
#include "../figuresLib/include/info.h"

int main()
{
    setlocale(LC_CTYPE, "rus");
    figures_lib::Figure figure;
    figures_lib::Triangle triangle(10, 20, 30, 50, 60, 70);
    figures_lib::Right_Triangle right(10, 20, 30, 80, 30);
    figures_lib::Isosceles_Triangle isosceles(10, 20, 30, 40);
    figures_lib::Equilateral_Triangle equial(10);
    figures_lib::Quadrangle quardangle(10, 20, 30, 40, 50, 60, 70, 80);
    figures_lib::Rectangle rectangle(10, 20);
    figures_lib::Square square(10);
    figures_lib::Parallelogram paral(10, 20, 50, 60);
    figures_lib::Rhombus rhombus(10, 50, 60);
    figures_lib::print_info(triangle);
    figures_lib::print_info(right);
    figures_lib::print_info(isosceles);
    figures_lib::print_info(equial);
    figures_lib::print_info(quardangle);
    figures_lib::print_info(rectangle);
    figures_lib::print_info(square);
    figures_lib::print_info(paral);
    figures_lib::print_info(rhombus);
    return 0;
}