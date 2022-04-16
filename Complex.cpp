#include "Complex.h"
#include <iostream>

TComplex::TComplex(double re_, double im_)
{
	re = re_;
	im = im_;
}

TComplex::TComplex(const TComplex& c)
{
	re = c.re;
	im = c.im;
}


double TComplex::GetRe()
{
	return re;
}

void TComplex::SetRe(double re_)
{
	re = re_;
}


double TComplex::GetIm()
{
	return im;
}

void TComplex::SetIm(double im_)
{
	im = im_;
}


TComplex TComplex::operator+(TComplex& p)
{
	TComplex res(*this);

	res.re += p.re;
	res.im += p.im;

	return res;
}

TComplex TComplex::operator-(TComplex& p)
{
	TComplex res(*this);

	res.re -= p.re;
	res.im -= p.im;

	return res;
}

TComplex TComplex::operator*(TComplex& p)
{
	TComplex res;

	res.re = re * p.re - im * p.im;
	res.im = im * p.re + re * p.im;

	return res;
}

TComplex TComplex::operator/(TComplex& p)
{
	try {
		if ((p.im == 0) && (p.re == 0))
		{
			throw(1);
		}
		TComplex res;
		res.re = (re * p.re + im * p.im) / (pow(p.re, 2) + pow(p.im, 2));
		res.im = (im * p.re - re * p.im) / (pow(p.re, 2) + pow(p.im, 2));
		return res;
	}
	catch (int err) {
		std::cout << "Division by zero" << std::endl;
		return *this;
	}
}


TComplex& TComplex::operator = (const TComplex& p) 
{
	re = p.re;
	im = p.im;
	return *this;
}


bool TComplex::operator==(TComplex& p)
{
	return (re == p.re) && (im == p.im);
}

bool TComplex::operator!=(TComplex& p)
{
	return !(this -> operator==(p));
}

double TComplex::Abs()
{
	return sqrt(pow(re, 2) + pow(im, 2));
}


std::istream& operator>>(std::istream& istr, TComplex& p)
{
	std::cout << "Re = ";
	istr >> p.re;

	std::cout << "Im = ";
	istr >> p.im;

	return istr;
}

std::ostream& operator<<(std::ostream& ostr, TComplex& p)
{
	ostr << p.GetRe() << " + i * " << p.GetIm();

	return ostr;
}
