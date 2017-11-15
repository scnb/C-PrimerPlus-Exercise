#include "stdafx.h"
#include "port.h"
#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::ostream;

Port::Port(const char * br, const char * st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strcpy(style, st);
	bottles = b;
}

Port::Port(const Port & b)
{
	brand = new char[strlen(b.brand) + 1];
	strcpy(brand, b.brand);
	strcpy(style, b.style);
	bottles = b.bottles;
}

Port & Port::operator=(const Port & p)
{
	Port temp;
	temp.brand = new char[strlen(p.brand) + 1];
	strcpy(temp.brand, p.brand);
	strcpy(temp.style, p.style);
	temp.bottles = p.bottles;
	return temp;
}

Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b)
{
	if (bottles > b || bottles == b)
	{
		bottles -= b;
	}
	else
	{
		cout << "没有那么多酒！\n";
	}
	return *this;
}

void Port::Show()const
{
	cout << "Brand: " << brand << endl;
	cout << "Style: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
	os << "Brand: " << p.brand << endl;
	os << "Style: " << p.style << endl;
	os << "Bottles: " << p.bottles << endl;
	return os;
}

VintagePort::VintagePort() : Port()
{
	nickname = new char[10];
	strcpy(nickname, "nickname");
	year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : Port(br,"none", b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	VintagePort temp;
	temp.nickname = new char[strlen(vp.nickname) + 1];
	strcpy(temp.nickname, vp.nickname);
	year = vp.year;
	return temp;
}

void VintagePort::Show()const
{
	Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << (const Port &)vp;
	os << "Nickname: " << vp.nickname << endl;
	os << "Year: " << vp.year << endl;
	return os;
}