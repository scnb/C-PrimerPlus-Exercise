// 7-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
float average(float a, float b);

int main()
{
	float a, b;
	cout << "输入两个数，以空格隔开：" << endl;
	cin >> a;
	cin >> b;
	//float aver;
	while (a != 0 && b != 0)
	{
		cout << "调和平均数是：" << average(a, b)<< endl;
		cout << "输入两个数，以空格隔开：" << endl;
		cin >> a;
		cin >> b;
	}
    return 0;
}

float average(float x, float y)
{
	return 2.0*x*y / (x + y);
}
