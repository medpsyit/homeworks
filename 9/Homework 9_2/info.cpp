#include <iostream>
#include "triangles.h"
#include "quadrangles.h"

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