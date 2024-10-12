#include "figure.h"

Figure::Figure() {}
void Figure::print_info_figure()
{
	std::cout << figuresName << " (стороны " << a << ", " << b << ", " << c
		<< "; углы " << A << ", " << B << ", " << C << ") создан" << std::endl;
}
void Figure::check_conditions(){}
int Figure::get_sides() { return sidesAmount; }
std::string Figure::get_name() { return figuresName; }
int Figure::get_a() { return a; }
int Figure::get_b() { return b; }
int Figure::get_c() { return c; }
int Figure::get_d() { return d; }
int Figure::get_A() { return A; }
int Figure::get_B() { return B; }
int Figure::get_C() { return C; }
int Figure::get_D() { return D; }