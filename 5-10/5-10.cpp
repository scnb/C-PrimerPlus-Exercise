// 5-10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int row;
	int i, j, k;
	cout << "��������:";
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

