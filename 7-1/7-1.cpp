// 7-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
float average(float a, float b);

int main()
{
	float a, b;
	cout << "�������������Կո������" << endl;
	cin >> a;
	cin >> b;
	//float aver;
	while (a != 0 && b != 0)
	{
		cout << "����ƽ�����ǣ�" << average(a, b)<< endl;
		cout << "�������������Կո������" << endl;
		cin >> a;
		cin >> b;
	}
    return 0;
}

float average(float x, float y)
{
	return 2.0*x*y / (x + y);
}
