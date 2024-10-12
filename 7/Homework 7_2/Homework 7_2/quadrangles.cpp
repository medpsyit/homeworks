#include "quadrangles.h"
#include "exceptions.h"

void Quadrangle::print_info_figure()
{
	std::cout << figuresName << " (������� " << a << ", " << b << ", " << c << ", " << d
		<< "; ���� " << A << ", " << B << ", " << C << ", " << D << ") ������" << std::endl;
}

void Quadrangle::check_conditions()
{
	if ((A + B + C + D) != 360)
	{
		throw Restrictions("������ �������� ������. �������: ����� ����� �� ����� 360.");
	}
};

void Rectangle::check_conditions()
{
	if ((a == c && b == d) && ((A != 90) || (B != 90) || (C != 90) || (D != 90)))
	{
		throw Restrictions("������ �������� ������. �������: �� ��� ���� ����� 90.");
	}
	else if ((a != c || b != d) && ((A == 90) || (B == 90) || (C == 90) || (D == 90)))
	{
		throw Restrictions("������ �������� ������. �������: ������� ������� �� �����.");
	}
	else if ((a != c || b != d) && ((A != 90) || (B != 90) || (C != 90) || (D != 90)))
	{
		throw Restrictions("������ �������� ������. �������: ������� ������� �� ����� � �� ��� ���� ����� 90.");
	}
};

void Square::check_conditions()
{
	if ((a == b && b == c && c == d) && ((A != 90) || (B != 90) || (C != 90) || (D != 90)))
	{
		throw Restrictions("������ �������� ������. �������: �� ��� ���� ����� 90.");
	}
	else if ((a != b || b != c || c != d) && ((A == 90) || (B == 90) || (C == 90) || (D == 90)))
	{
		throw Restrictions("������ �������� ������. �������: ������� �� �����.");
	}
	else if ((a != b || b != c || c != d) && ((A != 90) || (B != 90) || (C != 90) || (D != 90)))
	{
		throw Restrictions("������ �������� ������. �������: ������� �� ����� � �� ��� ���� ����� 90.");
	}
};

void Parallelogram::check_conditions()
{
	if ((a == c && b == d) && (A != C || B != D))
	{
		throw Restrictions("������ �������� ������. �������: ���� ������� �� �����.");
	}
	else if ((a != c || b != d) && (A == C && B == D))
	{
		throw Restrictions("������ �������� ������. �������: ������� ������� �� �����.");
	}
	else if ((a != c || b != d) && (A != C || B != D))
	{
		throw Restrictions("������ �������� ������. �������: ������� � ���� ������� �� �����.");
	}
};

void Rhombus::check_conditions()
{
	if ((a == b && b == c && c == d) && (A != C || B != D))
	{
		throw Restrictions("������ �������� ������. �������: ���� ������� �� �����.");
	}
	else if ((a != b || b != c || c != d) && (A == C || B == D))
	{
		throw Restrictions("������ �������� ������. �������: ������� �� �����.");
	}
	else if ((a != b || b != c || c != d) && (A != C || B != D))
	{
		throw Restrictions("������ �������� ������. �������: ������� �� ����� � ���� ������� �� �����.");
	}
};