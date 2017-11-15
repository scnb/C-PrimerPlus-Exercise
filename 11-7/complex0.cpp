#include "stdafx.h"
#include "complex0.h"
#include <iostream>

Complex::Complex(double rea, double ima)
{
	real = rea;
	imaginary = ima;
}

Complex::Complex()
{
	real = imaginary = 0;
}

Complex::~Complex()
{

}

Complex Complex::operator+(const Complex & t)const
{
	Complex result;
	result.real = real + t.real;
	result.imaginary = imaginary + t.imaginary;
	return result;
}

Complex Complex::operator-(const Complex & t)const
{
	Complex result;
	result.real = real - t.real;
	result.imaginary = imaginary - t.imaginary;
	return result;
}

Complex Complex::operator*(const Complex & t)const
{
	Complex result;
	result.real = real*t.real - imaginary*t.imaginary;
	result.imaginary = real*t.imaginary + imaginary*t.real;
	return result;
}

Complex Complex::operator~()const
{
	Complex result;
	result.real = real;
	result.imaginary = -imaginary;
	return result;
}

Complex Complex::operator*(double x)const
{
	Complex result;
	result.real = x*real;
	result.imaginary = x*imaginary;
	return result;
}

Complex operator*(double x, const Complex & t)
{
	return t*x;
}


std::ostream & operator << (std::ostream & os, const Complex & t)
{
	os << "(" << t.real << "," << t.imaginary << "i)\n";
	return os;
}
std::istream & operator >> (std::istream & os, Complex & t)//这里的t不能是const类型的，否则的话就无法修改了
{
	std::cout << "real: ";
	os >> t.real;
	std::cout << "imaginary: ";
	os >> t.imaginary;
	return os;
}