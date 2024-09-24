#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imag;
public:
	Complex() : real(0), imag(0) {}
	Complex(double r, double i) : real(r), imag(i) {}
	Complex operator+(const Complex& c) {
		return Complex(real + c.real, imag + c.imag);
	}
	Complex operator-(const Complex& c) {
		return Complex(real - c.real, imag - c.imag);
	}
	Complex operator*(const Complex& c) {
		return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
	}
	Complex operator/(const Complex& c) {
		return Complex((real * c.real + imag * c.imag) / (c.real * c.real + c.imag * c.imag), (imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag));
	}
	void print() {
		cout << real << " + " << imag << "i" << endl;
	}
};

int main(){
	Complex c1(1, 2);
	Complex c2(3, 4);
	Complex c3 = c1 + c2;
	c3.print();
	c3 = c1 - c2;
	c3.print();
	c3 = c1 * c2;
	c3.print();
	c3 = c1 / c2;
	c3.print();
	return 0;
}