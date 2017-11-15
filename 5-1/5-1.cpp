// 5-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int low;
	int high;
	cout << "Enter two integers,the lowwer first:\n";
	cin >> low >> high;
	int sum = 0;
	for (int i = low;i <= high;i++)
	{
		sum = sum + i;
	}
	cout << "The sum is " << sum << endl;
	getchar();
	getchar();
    return 0;
}

