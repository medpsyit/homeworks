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

	int get_num() { return numerator_; }

	int get_denom() { return denominator_; }

	int gcd(int numerator_, int denominator_)
	{
		if (numerator_ < 0) { numerator_ = -numerator_; }
		if (denominator_ < 0) { denominator_ = -denominator_; }
		if (numerator_ == 0) { return denominator_; }
		if (denominator_ == 0) { return numerator_; }
		if (numerator_ >= denominator_) { return gcd(numerator_ % denominator_, denominator_); }
		return gcd(numerator_, denominator_ % numerator_);
	}

	Fraction operator+(Fraction other)
	{
		int tempNumerator_, tempDenominator_, gcd_;
		tempNumerator_ = this->numerator_ * other.denominator_;
		tempNumerator_ = tempNumerator_ + (other.numerator_ * this->denominator_);
		tempDenominator_ = (other.denominator_ * this->denominator_);
		gcd_ = gcd(tempNumerator_, tempDenominator_);
		tempNumerator_ = tempNumerator_ / gcd_;
		tempDenominator_ = tempDenominator_ / gcd_;
		return Fraction(tempNumerator_, tempDenominator_);
	}

	Fraction operator-(Fraction other)
	{
		int tempNumerator_, tempDenominator_, gcd_;
		tempNumerator_ = this->numerator_ * other.denominator_;
		tempNumerator_ = tempNumerator_ - (other.numerator_ * this->denominator_);
		tempDenominator_ = other.denominator_ * this->denominator_;
		gcd_ = gcd(tempNumerator_, tempDenominator_);
		tempNumerator_ = tempNumerator_ / gcd_;
		tempDenominator_ = tempDenominator_ / gcd_;
		return Fraction(tempNumerator_, tempDenominator_);
	}

	Fraction operator*(Fraction other)
	{
		int tempNumerator_, tempDenominator_, gcd_;
		tempNumerator_ = this->numerator_ * other.numerator_;
		tempDenominator_ = this->denominator_ * other.denominator_;
		gcd_ = gcd(tempNumerator_, tempDenominator_);
		tempNumerator_ = tempNumerator_ / gcd_;
		tempDenominator_ = tempDenominator_ / gcd_;
		return Fraction(tempNumerator_, tempDenominator_);
	}

	Fraction operator/(Fraction other)
	{
		int tempNumerator_, tempDenominator_, gcd_;
		tempNumerator_ = this->numerator_ * other.denominator_;
		tempDenominator_ = this->denominator_ * other.numerator_;
		gcd_ = gcd(tempNumerator_, tempDenominator_);
		tempNumerator_ = tempNumerator_ / gcd_;
		tempDenominator_ = tempDenominator_ / gcd_;
		return Fraction(tempNumerator_, tempDenominator_);
	}

	Fraction& operator++()
	{
		int tempNumerator_, gcd_;
		tempNumerator_ = this->denominator_;
		this->numerator_ = this->numerator_ + tempNumerator_;
		gcd_ = gcd(this->numerator_, this->denominator_);
		this->numerator_ = this->numerator_ / gcd_;
		this->denominator_ = this->denominator_ / gcd_;
		return *this;
	}

	Fraction operator++(int)
	{
		int tempNumerator_, gcd_;
		Fraction temp = *this;
		tempNumerator_ = this->denominator_;
		this->numerator_ = this->numerator_ + tempNumerator_;
		gcd_ = gcd(this->numerator_, this->denominator_);
		this->numerator_ = this->numerator_ / gcd_;
		this->denominator_ = this->denominator_ / gcd_;
		return temp;
	}

	Fraction& operator--()
	{
		int tempNumerator_, gcd_;
		tempNumerator_ = this->denominator_;
		this->numerator_ = this->numerator_ - tempNumerator_;
		gcd_ = gcd(this->numerator_, this->denominator_);
		this->numerator_ = this->numerator_ / gcd_;
		this->denominator_ = this->denominator_ / gcd_;
		return *this;
	}

	Fraction operator--(int)
	{
		int tempNumerator_, gcd_;
		Fraction temp = *this;
		tempNumerator_ = this->denominator_;
		this->numerator_ = this->numerator_ - tempNumerator_;
		gcd_ = gcd(this->numerator_, this->denominator_);
		this->numerator_ = this->numerator_ / gcd_;
		this->denominator_ = this->denominator_ / gcd_;
		return temp;
	}

};



int main()
{
	setlocale(LC_CTYPE, "rus");
	int first_, second_;
	std::cout << "Введите числитель первой дроби: ";
	std::cin >> first_;
	std::cout << "Введите знаменатель первой дроби: ";
	std::cin >> second_;
	Fraction first(first_, second_);
	std::cout << "Введите числитель второй дроби: ";
	std::cin >> first_;
	std::cout << "Введите знаменатель второй дроби: ";
	std::cin >> second_;
	Fraction second(first_, second_);

	Fraction third = first + second;
	std::cout << first.get_num() << '/' << first.get_denom() << " + " << second.get_num() << '/' << second.get_denom() << " = " << third.get_num() << '/' << third.get_denom() << std::endl;

	third = first - second;
	std::cout << first.get_num() << '/' << first.get_denom() << " - " << second.get_num() << '/' << second.get_denom() << " = " << third.get_num() << '/' << third.get_denom() << std::endl;

	third = first * second;
	std::cout << first.get_num() << '/' << first.get_denom() << " * " << second.get_num() << '/' << second.get_denom() << " = " << third.get_num() << '/' << third.get_denom() << std::endl;

	third = first / second;
	std::cout << first.get_num() << '/' << first.get_denom() << " / " << second.get_num() << '/' << second.get_denom() << " = " << third.get_num() << '/' << third.get_denom() << std::endl;
	
	std::cout << "++" << first.get_num() << '/' << first.get_denom() << " * " << second.get_num() << '/' << second.get_denom() << " = ";
	third = ++first * second;
	std::cout << third.get_num() << '/' << third.get_denom() << std::endl;
	std::cout << "Значение дроби 1 = " << first.get_num() << '/' << first.get_denom() << std::endl;
	
	std::cout << first.get_num() << '/' << first.get_denom() << "-- * " << second.get_num() << '/' << second.get_denom() << " = ";
	third = first-- * second;
	std::cout << third.get_num() << '/' << third.get_denom() << std::endl;
	std::cout << "Значение дроби 1 = " << first.get_num() << '/' << first.get_denom() << std::endl;

	return 0;
}