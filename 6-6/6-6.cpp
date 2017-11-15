// 6-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Donation
{
	char name[20];
	double money;
};

int main()
{
	int people;
	cout << "enter the number of people who donated:";
	cin >> people;
	int i;
	struct Donation *ps = new struct Donation[people];
	for (i = 0;i < people;i++)
	{
		cout << "enter people " << i + 1 << " 's name: ";
		cin >> ps[i].name;
		cout << "enter people " << i + 1 << " 's money: ";
		cin >> ps[i].money;
	}
	cout << "wait a monment,calculating........\n";
	cout << "Grand Patrons:\n";
	while (i >= 0)
	{
		if (ps[i].money >= 10000)
		{
			cout << ps[i].name << "    " << ps[i].money << endl;
		}
		--i;
	}
	cout << endl;
	cout << "Patrons:\n";
	int j = 0;
	while (j<people)
	{
		if (ps[i].money <= 10000 && ps[i].money >= 0)
		{
			cout << ps[i].name << "       " << ps[i].money << endl;
		}
		++j;
	}
	getchar();
	getchar();
	return 0;
}


