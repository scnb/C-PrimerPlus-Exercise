// 9-3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

struct chaff
{
	char dross[20];
	int slag;
};

char buff[200];

int main()
{
	using namespace std;
	chaff *  ps[2];
	char str[20];
	ps[0] = new (buff) chaff;
	ps[1] = new (new chaff) chaff;
	for (int i = 0;i < 2;i++)
	{
		cout << "��chaff���ַ����鸳ֵ��";
		cin.getline(str, 20);
		strcpy_s(ps[i]->dross, str);
		cout << "��chaff1�����͸�ֵ��";
		cin >> ps[i]->slag;
		cin.get();
	}
	for (int i = 0;i < 2;i++)
	{
		cout << "chaff���ַ����飺";
		cout << ps[i]->dross;
		cout << endl;
		cout << "chaff�����ͣ�";
		cout << ps[i]->slag;
		cout << endl;
	}
	getchar();
    return 0;
}

