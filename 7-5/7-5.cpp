// 7-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
	cout << "enter the number you want to have a factorial calculate:";
	int n;
	while (cin >> n)
	{
		cout << "answer is " << factorial(n) << endl;
	}
	getchar();
    return 0;
}

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n - 1);
	}
}

