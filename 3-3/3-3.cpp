// 3-3.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "����ȡ��֡��룺_";
	cout << '\b';
	cin >> degree >> minute >> second;
	float d = degree + float(minute) / d_to_m + float(second) / m_to_s / d_to_m;
	cout << "ת���ɶ�Ϊ: " << d << endl;
	getchar();
	getchar();
    return 0;
}

