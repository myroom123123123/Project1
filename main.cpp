#include <iostream>
using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}
	Fraction& operator=(const Fraction& f)
	{
		numerator = f.numerator;
		denominator = f.denominator;
		return *this;
	}
    Fraction operator+(const Fraction & f)
    {
        Fraction result;
        result.numerator = numerator * f.denominator + f.numerator * denominator;
        result.denominator = denominator * f.denominator;
        return result;
    }
	Fraction operator-(const Fraction& f)
	{
		Fraction result;
		result.numerator = numerator * f.denominator - f.numerator * denominator;
		result.denominator = denominator * f.denominator;
		return result;
	}
	Fraction operator*(const Fraction& f)
	{
		Fraction result;
		result.numerator = numerator * f.numerator;
		result.denominator = denominator * f.denominator;
		return result;
	}
	Fraction operator/(const Fraction& f)
	{
		Fraction result;
		result.numerator = numerator * f.denominator;
		result.denominator = denominator * f.numerator;
		return result;
	}
	friend ostream& operator<<(ostream & os, const Fraction & f)
	{
		os << f.numerator << "/" << f.denominator;
		return os;
	}
	void print()
	{
		cout << *this << endl;
	}
};

int main()
{
	Fraction f1(1, 2), f2(3, 4);
	Fraction f3 = f1 + f2;
	f3.print();
	Fraction f4 = f1 - f2;
	f4.print();
	Fraction f5 = f1 * f2;
	f5.print();
	Fraction f6 = f1 / f2;
	f6.print();
	return 0;
}