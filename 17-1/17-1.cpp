// 17-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <ostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
using std::setw;
using std::setprecision;
using std::setfill;

int main()
{
	char ch;
	int ct = 0;
	while (cin.peek() != '$')
	{
		cin.get(ch);
		if (ch != ' ')
		{
			ct++;
		}
	}
	cout << "在第一个$之前，一共有 " << ct << " 个字符。\n";
	cin >> ch;
	cout << ch << endl;
	system("pause");
    return 0;
}

