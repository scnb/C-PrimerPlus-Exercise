#include "stdafx.h"
#include "golf.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

Golf::Golf()
{
	char str[LEN];
	cout << "输入姓名：";
	cin.getline(str, LEN);
	strcpy_s(name, str);
	cout << "输入击球数: ";
	cin >> handicap;
}

Golf::Golf(const char * str, int hc)
{
	strcpy_s(name, str);
	handicap = hc;
}

void Golf::reset_handicap(int hc)
{
	handicap = hc;
}

void Golf::showgolf()
{
	cout << "Name = " << name;
	cout << " Handicap = " << handicap;
	cout << endl;
}