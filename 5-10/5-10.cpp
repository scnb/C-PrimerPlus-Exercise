// 5-10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int row;
	int i, j, k;
	cout << "输入行数:";
	cin >> row;
	for (i = 1;i <= row;i++)
	{
		for (j = 0;j < row-i;j++)
		{
			cout << ".";
		}
		for (k = j;k < row;k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	getchar();
	getchar();
    return 0;
}

