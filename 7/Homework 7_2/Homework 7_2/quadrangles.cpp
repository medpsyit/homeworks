#include "quadrangles.h"
#include "exceptions.h"

void Quadrangle::print_info_figure()
{
	std::cout << figuresName << " (стороны " << a << ", " << b << ", " << c << ", " << d
		<< "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;
}

void Quadrangle::check_conditions()
{
	if ((A + B + C + D) != 360)
	{
		throw Restrictions("Ошибка создания фигуры. Причина: сумма углов не равна 360.");
	}
};

void Rectangle::check_conditions()
{
	if ((a == c && b == d) && ((A != 90) || (B != 90) || (C != 90) || (D != 90)))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: не все углы равны 90.");
	}
	else if ((a != c || b != d) && ((A == 90) || (B == 90) || (C == 90) || (D == 90)))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны попарно не равны.");
	}
	else if ((a != c || b != d) && ((A != 90) || (B != 90) || (C != 90) || (D != 90)))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны попарно не равны и не все углы равны 90.");
	}
};

void Square::check_conditions()
{
	if ((a == b && b == c && c == d) && ((A != 90) || (B != 90) || (C != 90) || (D != 90)))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: не все углы равны 90.");
	}
	else if ((a != b || b != c || c != d) && ((A == 90) || (B == 90) || (C == 90) || (D == 90)))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны не равны.");
	}
	else if ((a != b || b != c || c != d) && ((A != 90) || (B != 90) || (C != 90) || (D != 90)))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны не равны и не все углы равны 90.");
	}
};

void Parallelogram::check_conditions()
{
	if ((a == c && b == d) && (A != C || B != D))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: углы попарно не равны.");
	}
	else if ((a != c || b != d) && (A == C && B == D))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны попарно не равны.");
	}
	else if ((a != c || b != d) && (A != C || B != D))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны и углы попарно не равны.");
	}
};

void Rhombus::check_conditions()
{
	if ((a == b && b == c && c == d) && (A != C || B != D))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: углы попарно не равны.");
	}
	else if ((a != b || b != c || c != d) && (A == C || B == D))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны не равны.");
	}
	else if ((a != b || b != c || c != d) && (A != C || B != D))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны не равны и углы попарно не равны.");
	}
};