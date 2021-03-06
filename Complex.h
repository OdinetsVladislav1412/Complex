#pragma once
#include <iostream>

class TComplex
{
public:

	TComplex(double re_ = 0, double im_ = 0);
	TComplex(const TComplex& c);

	double GetRe();
	void SetRe(double re_);

	double GetIm();
	void SetIm(double im_);

	TComplex operator + (TComplex& p);
	TComplex operator - (TComplex& p);
	TComplex operator * (TComplex& p);
	TComplex operator / (TComplex& p);

	TComplex& operator = (const TComplex& valcomplex);

	bool operator == (TComplex& p);
	bool operator != (TComplex& p);

	double Abs(); //module

	friend std::istream& operator >> (std::istream& istr, TComplex& p);

private:
	
	double re;
	double im;
};

std::ostream& operator << (std::ostream& ostr, TComplex& p);