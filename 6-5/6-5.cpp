// 6-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int money;
	cout << "enter your income:";
	int pax;
	while (cin >> money && money >= 0)//������С��0�����Ƿ�����ʱ�˳�ѭ��
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

