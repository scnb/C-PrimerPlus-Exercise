#include "stdafx.h"
#include "dma.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

ABCDMA::ABCDMA()
{
	strcpy(kind, "ABCDMA");
	label = new char(MAX);
	strcpy(label, "null");
	rating = 0;
}
ABCDMA::ABCDMA(const char * k,const char * l,int r)
{
	strcpy(kind, k);
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	rating = r;
}
ABCDMA::ABCDMA(const ABCDMA & a)
{
	strcpy(kind, a.kind);
	label = new char[strlen(a.label) + 1];
	strcpy(label, a.label);
	rating = a.rating;
}

ABCDMA::~ABCDMA()
{
	delete[] label;
}

void ABCDMA::View()const
{
	cout << "Kind: " << kind << endl;
	cout << "Label: " << label << endl;
	cout << "Rating: " << rating << endl;
}

baseDMA::baseDMA(const char * k,const char *l, int r) : ABCDMA(k,l,r)
{
}

baseDMA::baseDMA(const baseDMA & rs):ABCDMA(rs)
{
}

baseDMA::~baseDMA()
{
}

void baseDMA::View()const
{
	ABCDMA::View();
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
	return *this;
}

lacksDMA::lacksDMA(const char * c, const char * k,const char *l, int r) : ABCDMA(k,l, r)
{
	std::strncpy(color, c, 39);//只复制39个字符
	color[39] = '\0';//数组第四十个元素处放空字符
}

lacksDMA::lacksDMA(const char * c, const ABCDMA & rs) : ABCDMA(rs)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

void lacksDMA::View()const
{
	ABCDMA::View();
	cout << "Color: " << color << endl;
}


hasDMA::hasDMA(const char * s, const char * k,const char * l, int r) : ABCDMA(k,l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const ABCDMA & rs) : ABCDMA(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs) : ABCDMA(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
	if (this == &hs)
	{
		return *this;
	}
	delete[] style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}

void hasDMA::View()const
{
	ABCDMA::View();
	cout << "Style: " << style << endl;
}
