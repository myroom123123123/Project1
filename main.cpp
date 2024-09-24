#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imag;
public:
	Complex& operator=(const Complex& c) {
		real = c.real;
		imag = c.imag;
		return *this;
	}
	Complex operator+(const Complex& c) {
		Complex temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag;
		return temp;
	}
	Complex operator-(const Complex& c) {
		Complex temp;
		temp.real = real - c.real;
		temp.imag = imag - c.imag;
		return temp;
	}
	Complex operator*(const Complex& c) {
		Complex temp;
		temp.real = real * c.real - imag * c.imag;
		temp.imag = real * c.imag + imag * c.real;
		return temp;
	}
	Complex operator/(const Complex& c) {
		Complex temp;
		temp.real = (real * c.real + imag * c.imag) / (c.real * c.real + c.imag * c.imag);
		temp.imag = (imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag);
		return temp;
	}
	Complex(double r = 0, double i = 0) : real(r), imag(i) {}
	void print() {
		ostream& out = cout;
		out << real << " + " << imag << "i" << endl;

	}
};

int main(){
	Complex c1(1, 2), c2(3, 4), c3;
	c3 = c1 + c2;
	c3.print();
	c3 = c1 - c2;
	c3.print();
	c3 = c1 * c2;
	c3.print();
	c3 = c1 / c2;
	c3.print();
	return 0;
}