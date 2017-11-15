#include "stdafx.h"
#include "winec.h"
#include <iostream>
#include <valarray>
using std::cout;
using std::cin;
using std::endl;

typedef std::valarray<int> ArrayInt;
typedef std::pair<std::valarray<int>, std::valarray<int>> PairArray;



Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : string(l),PairArray(ArrayInt(yr,y),ArrayInt(bot,y))
{
	year = y;
}

Wine::Wine(const char * l, int y) : string(l), PairArray(ArrayInt(y), ArrayInt(y))
{
	year = y;
}

Wine::~Wine()
{

}

void Wine::GetBottles()
{
	ArrayInt a(year);
	ArrayInt b(year);
	for (int i = 0;i < year;i++)
	{
		cout << "����� " << i + 1 << " �����: ";
		cin >> a[i];
		cout << "����� " << i + 1 << " ����ݵĲ�����: ";
		cin >> b[i];
	}
	(PairArray &) (*this) = make_pair(a, b);//ǿ��ת�����ر����
}
int Wine::sum()const
{
	return PairArray::second.sum();
}
const string & Wine::label()
{
	return (const string &)*this;
}

void Wine::Show()const
{
	cout << "Wine:	" << (const string &)*this << endl;
	cout << "\tYear		Bottles" << endl;
	for (int i = 0;i < year;i++)
	{
		cout << "\t" << PairArray::first[i] << "\t\t" << PairArray::second[i] << endl;
	}
}