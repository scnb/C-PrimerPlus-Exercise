#pragma once
#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex(double rea,double ima);
	Complex();
	~Complex();
	Complex operator+(const Complex & t)const;
	Complex operator-(const Complex & t)const;
	Complex operator*(const Complex & t)const;
	Complex operator*(double x)const;
	Complex operator~()const;
	friend Complex operator*(double x, const Complex & t);
	friend std::ostream & operator << (std::ostream & os, const Complex & t);
	friend std::istream & operator >> (std::istream & os, Complex & t);//ע��cin��Ӧ����istream�����������t������const���͵ģ�����Ļ��Ͳ��ܶ�ȡ�����ֵ���޸�t��
};

#endif