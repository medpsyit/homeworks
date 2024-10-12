#include "triangles.h"
#include "exceptions.h"

void Triangle::check_conditions()
{
	if ((A + B + C) != 180)
	{
		throw Restrictions("������ �������� ������. �������: ����� ����� �� ����� 180.");
	}
};

void Right_Triangle::check_conditions()
{
	if (C != 90)
	{
		throw Restrictions("������ �������� ������. �������: ���� � �� ����� 90.");
	}
};

void Isosceles_Triangle::check_conditions()
{
	if ((a != c) && (A == C))
	{
		throw Restrictions("������ �������� ������. �������: ������� � � � �� �����.");
	}
	else if ((a == c) && (A != C))
	{
		throw Restrictions("������ �������� ������. �������: ���� � � � �� �����.");
	} 
	else if ((a != c) && (A != C))
	{
		throw Restrictions("������ �������� ������. �������: ������� � � �, � ����� ���� � � � �� �����.");
	}
};

void Equilateral_Triangle::check_conditions()
{
	if ((A == B && B == C) && (a != b || b != c))
	{
		throw Restrictions("������ �������� ������. �������: ������� �� �����.");
	}
	else if ((A != B || B != C) && (a == b && b == c))
	{
		throw Restrictions("������ �������� ������. �������: ���� �� �����.");
	} 
	else if ((A != B || B != C) && (a != b || b != c))
	{
		throw Restrictions("������ �������� ������. �������: ������� � ���� �� �����.");
	}
};