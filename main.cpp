#include <iostream>
using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction(int numerator, int denominator)
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}
	Fraction operator+(Fraction& other)
	{
		int newNumerator = this->numerator * other.denominator + other.numerator * this->denominator;
		int newDenominator = this->denominator * other.denominator;
		return Fraction(newNumerator, newDenominator);
	}
	Fraction operator-(Fraction& other)
	{
		int newNumerator = this->numerator * other.denominator - other.numerator * this->denominator;
		int newDenominator = this->denominator * other.denominator;
		return Fraction(newNumerator, newDenominator);
	}
	Fraction operator*(Fraction& other)
	{
		int newNumerator = this->numerator * other.numerator;
		int newDenominator = this->denominator * other.denominator;
		return Fraction(newNumerator, newDenominator);
	}
	Fraction operator/(Fraction& other)
	{
		int newNumerator = this->numerator * other.denominator;
		int newDenominator = this->denominator * other.numerator;
		return Fraction(newNumerator, newDenominator);
	}
	void print()
	{
		cout << numerator << "/" << denominator << endl;
	}
};

int main()
{
	Fraction f1(1, 2);
	Fraction f2(1, 3);
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