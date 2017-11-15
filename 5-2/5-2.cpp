// 5-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<long double, 101> productor;
	productor[0] = 1;
	for (int i = 1;i <= 100;i++)
	{
		productor[i] = i*productor[i - 1];
	}
	for (int i = 0;i <= 100;i++)
	{
		cout << productor[i] << endl;
	}
	getchar();
    return 0;
}

