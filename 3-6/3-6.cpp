// 3-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int main()
{
	using namespace std;
	int km;
	cout << "����������������_";
	cout << '\b';
	cin >> km;
	int l;
	cout << "��������ʹ���˶�������_";
	cout << '\b';
	cin >> l;
	cout << "�����ٹ��������Ϊ��" << 100 * (float(l) / km) << " ����" << endl;
	getchar();
	getchar();
    return 0;
}

