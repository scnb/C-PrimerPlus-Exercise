#include "stdafx.h"
#include "wine.h"
#include <iostream>
#include <valarray>
using std::cout;
using std::cin;
using std::endl;

typedef std::valarray<int> ArrayInt;
typedef std::pair<std::valarray<int>, std::valarray<int>> PairArray;

Wine::Wine()
{
	brand = "����ͷ";
	ArrayInt a(1);
	ArrayInt b(1);
	p = make_pair(a, b);
}

Wine::Wine(const char * l, int y,const int yr[],const int bot[])
{
	brand = l;
	year = y;
	ArrayInt a(y);
	ArrayInt b(y);
	for (int i = 0;i < y;i++)
	{
		a[i] = yr[i];
		b[i] = bot[i];
	}
	p = make_pair(a, b);
}

Wine::Wine(const char * l, int y)
{
	brand = l;
	year = y;
	ArrayInt a(y);
	ArrayInt b(y);
	p = make_pair(a, b);//Ϊʲô����û��pair���÷�����
}

Wine::~Wine()
{

}

void Wine::GetBottles()
{
	//std::valarray<int> a(year);
	//std::valarray<int> b(year);
	ArrayInt a(year);
	ArrayInt b(year);
	for (int i = 0;i < year;i++)
	{
		cout << "����� "<<i+1<<" �����: ";
		cin >> a[i];
		cout << "����� " << i+1 << " ����ݵĲ�����: ";
		cin >> b[i];
	}
	p = make_pair(a, b);
}
int Wine::sum()const
{
	return p.second.sum();
}
string & Wine::label()
{
	return brand;
}

void Wine::Show()const
{
	cout << "Wine:	" << brand << endl;
	cout << "\tYear		Bottles" << endl;
	for (int i = 0;i < year;i++)
	{
		cout << "\t" << p.first[i] << "\t\t" << p.second[i] << endl;
	}
}