// 3-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int m_to_cm = 100;
	cout << "���������ߣ����ף�:_";
	cout << '\b';
	int height;
	cin >> height;
	int meter = height / m_to_cm;
	int cmeter = height%m_to_cm;
	cout << "�������ǣ�" << meter << " �� " << cmeter << " ���� " << endl;
	getchar();
	getchar();

    return 0;
}

