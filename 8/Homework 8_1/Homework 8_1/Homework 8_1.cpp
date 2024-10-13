#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	int converting(Fraction first, Fraction second)
	{
		return first.numerator_ * second.denominator_;
	}

	bool operator==(Fraction other) { return converting(*this,other) == converting(other,*this); }
	bool operator!=(Fraction other) { return !(converting(*this, other) == converting(other, *this)); }
	bool operator>(Fraction other) { return converting(*this, other) > converting(other, *this); }
	bool operator<=(Fraction other) { return !(converting(*this, other) > converting(other, *this)); }
	bool operator<(Fraction other) { return converting(*this, other) < converting(other, *this); }
	bool operator>=(Fraction other) { return !(converting(*this, other) < converting(other, *this)); }
};



int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}