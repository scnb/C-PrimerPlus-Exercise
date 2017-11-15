// 6-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int SIZE = 10;
int main()
{
	double donation[SIZE];
	int i = 0;
	while (cin>>donation[i])
	{
		++i;
		if (i > 9)	
		{
			break;
		}
	}
	double total = 0;
	for (int j = 0;j < i;j++)
	{
		total += donation[j];
	}
	int count = 0;
	for (int j = 0;j < i;j++)
	{
		if (donation[j] > (total / i))
		{
			++count;
		}
	}
	cout << "total is " << total << endl;
	cout << "average is " << total / i << endl << i << endl;
	cout << "bigger than average is " << count << endl;
	getchar();
	getchar();
	getchar();
    return 0;
}

