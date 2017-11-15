// 5-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int sum = 0;
	int val;
	cout << "Enter the number:";
	cin >> val;
	while (0 != val)
	{
		sum = sum + val;
		cout << "目前的和是：" << sum << endl;
		cin >> val;
	}
	getchar();
    return 0;
}

