// 3-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int degree;
	int second;
	int minute;
	const int d_to_m = 60;
	const int m_to_s = 60;
	cout << "输入度、分、秒：_";
	cout << '\b';
	cin >> degree >> minute >> second;
	float d = degree + float(minute) / d_to_m + float(second) / m_to_s / d_to_m;
	cout << "转换成度为: " << d << endl;
	getchar();
	getchar();
    return 0;
}

