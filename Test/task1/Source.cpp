#include <iostream>
#include <cmath>

class Complex
{
private:
	double re;
	double im;

public:

	double getRe() const { return re; }
	double getIm() const { return im; }
	Complex conj() const { return Complex(re, -1 * im); }
	float abs() const { return std::sqrt(re * re + im * im); }

	float arg() const
	{
		if (re > 0 && im >= 0) { return 3.14 - std::atan(std::abs(im / re)); }
		else if (re < 0 && im >= 0) { return 3.14 + std::atan(std::abs(im / re)); }
		else if (re > 0 && im < 0) { return 6.28 - std::atan(std::abs(im / re)); }
		else if (re == 0 && im > 0) { return 1.57; }
		else { return 4.71; }
	}

	Complex operator +(const Complex& ps) const
	{
		return Complex(re + ps.re, im + ps.im);
	}

	Complex operator -(const Complex& ps) const
	{
		return Complex(re - ps.re, im - ps.im);
	}

	Complex operator /(const Complex& ps) const
	{
		return Complex((re * ps.re + im * ps.im) / ps.abs() * ps.abs(), (im * ps.re - re * ps.im) / ps.abs() * ps.abs());
	}

	Complex operator *(const Complex& ps) const
	{
		return Complex(re * ps.re - im * ps.im, re * ps.im + ps.re * im);
	}

	Complex operator +(const double d) const
	{
		return Complex(re, im) + Complex(d, 0);
	}

	Complex operator -(const double d) const
	{
		return Complex(re, im) - Complex(d, 0);
	}

	Complex operator *(const double d) const
	{
		return Complex(re, im) * Complex(d, 0);
	}

	Complex operator /(const double d) const
	{
		return Complex(re, im) / Complex(d, 0);
	}

	Complex(double re = 0, double im = 0) : re(re), im(im) {}
	Complex(const Complex& com) : re(com.re), im(com.im) {}

	~Complex() {}
};

void Print(const Complex com)
{
	if (com.getIm() > 0)
	{
		std::cout << com.getRe() << " + " << com.getIm() << "*i" << std::endl;
	}

	else
	{
		std::cout << com.getRe() << " " << com.getIm() << "*i" << std::endl;
	}
}

int main(int argc, char* argv[])
{
	Complex c(3, 4);

	std::cout << c.abs() << std::endl;

	Print(c);

	Complex a = c.conj();

	Print(a);

	Complex b = c + 5;

	Print(b);

	return EXIT_SUCCESS;
}