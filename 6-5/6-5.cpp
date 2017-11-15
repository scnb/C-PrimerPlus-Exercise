// 6-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int money;
	cout << "enter your income:";
	int pax;
	while (cin >> money && money >= 0)//当输入小于0或者是非数字时退出循环
	{
		if (money >= 35000)
		{
			pax = (money - 35000)*0.2 + 20000 * 0.15 + 10000 * 0.1;
		}
		else if (money >= 15001 && money < 35000)
		{
			pax = (money - 15000)*0.15 + 10000 * 0.1;
		}
		else if (money >= 5001 && money < 15001)
		{
			pax = (money - 5000)*0.1;
		}
		else
		{
			pax = 0;
		}
		cout << pax << endl;
	}
    return 0;
}

