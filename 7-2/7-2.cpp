// 7-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int  enter(float num[10]);
void average(float num[10], int n);
void show(float num[10], int n);

int main()
{
	float val[10];
	int n;
	n=enter(val);
	cout << "��ʾ���飺" << endl;
	show(val,n);
	average(val, n);
	getchar();
	getchar();
	getchar();
    return 0;
}

int  enter(float num[10])
{
	float score;
	int i = 0;
	cout << "ÿ������һ���ɼ�(���ʮ��)������������ַ��˳����룺" << endl;
	cout << "Number " << i + 1 << ":";
	while (cin >> score)
	{
		num[i++] = score;
		if (i == 10)
		{
			break;
		}
		cout << "Number " << i + 1<<":";
		
	}
	return i;//�����м�����
}

void show(float num[10], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "Number " << i + 1 << ":" << num[i] << " ";
	}
	cout << endl;
}

void average(float num[10], int n)
{
	float sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += num[i];
	}
	cout << "Average = " << sum / n << endl;
}
