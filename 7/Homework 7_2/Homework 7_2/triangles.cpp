#include "triangles.h"
#include "exceptions.h"

void Triangle::check_conditions()
{
	if ((A + B + C) != 180)
	{
		throw Restrictions("Ошибка создания фигуры. Причина: сумма углов не равна 180.");
	}
};

void Right_Triangle::check_conditions()
{
	if (C != 90)
	{
		throw Restrictions("Ошибка создания фигуры. Причина: угол С не равен 90.");
	}
};

void Isosceles_Triangle::check_conditions()
{
	if ((a != c) && (A == C))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны а и с не равны.");
	}
	else if ((a == c) && (A != C))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: углы А и С не равны.");
	} 
	else if ((a != c) && (A != C))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны а и с, а также углы А и С не равны.");
	}
};

void Equilateral_Triangle::check_conditions()
{
	if ((A == B && B == C) && (a != b || b != c))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны не равны.");
	}
	else if ((A != B || B != C) && (a == b && b == c))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: углы не равны.");
	} 
	else if ((A != B || B != C) && (a != b || b != c))
	{
		throw Restrictions("Ошибка создания фигуры. Причина: стороны и углы не равны.");
	}
};