// 3-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int m_to_cm = 100;
	cout << "输入你的身高（厘米）:_";
	cout << '\b';
	int height;
	cin >> height;
	int meter = height / m_to_cm;
	int cmeter = height%m_to_cm;
	cout << "你的身高是：" << meter << " 米 " << cmeter << " 厘米 " << endl;
	getchar();
	getchar();

    return 0;
}

