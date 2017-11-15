#include "stdafx.h"
#include "vector.h"
#include <cmath>

#include <iostream>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	const double Rad_to_deg = 45.0 / atan(1.0);

	//公有函数
	Vector::Vector()
	{
		x = y = 0;
		mode = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (mode == RECT)
		{
			x = n1;
			y = n2;
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() - -";
			cout << "vector set to 0\n";
			x = y = 0;
			mode = RECT;//反三角是默认形式
		}
	}
	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (mode == RECT)//输入的参数是反三角形式的，同步转换成极坐标形式
		{
			x = n1;
			y = n2;
		}
		else if (mode == POL)
		{
			x = n1*cos(n2 / Rad_to_deg);
			y = n1*sin(n2 / Rad_to_deg);
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() - -";
			cout << "vector set to 0\n";
			x = y = 0;
			mode = RECT;//反三角是默认形式
		}
	}
	Vector::~Vector()
	{

	}
	void Vector::rect_mode()
	{
		mode = RECT;
	}
	void Vector::polar_mode()
	{
		mode = POL;
	}
	Vector Vector::operator+(const Vector & b)const
	{
		return Vector(x + b.x, y + b.y);//用显示构造函数来创建一个新的Vector并返回其副本；
	}
	Vector Vector::operator-(const Vector & b)const
	{
		return Vector(x - b.x, y - b.y);//用显示构造函数来返回一个新的Vector；
	}
	Vector Vector::operator-()const  //该重载运算符不是减，而是取负数
	{
		return Vector(-x, -y);
	}
	Vector Vector::operator*(double n)const
	{
		return Vector(n*x, n*y);
	}
	//友元函数
	Vector operator*(double n, const Vector & a)
	{
		return a*n;
	}
	std::ostream & operator<<(std::ostream & os, const Vector & v)
	{
		if (v.mode == Vector::RECT)
		{
			os << "(x,y) = (" << v.x << "," << v.y << ")\n";
		}
		else if (v.mode == Vector::POL)
		{
			os << "(mag,ang) = (" << v.magval() << "," << v.angval() << ")\n";
		}
		else
		{
			os << "Vector object mode is invalid.\n";
		}
		return os;
	}
}