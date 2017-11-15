// 7-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int  Fill_array(double ar[], int n);
void Show_array(double ar[], int n);
void Reverse_array(double ar[], int n);

int main()
{
	int num;
	double arr[10];
	num = Fill_array(arr, 10);
	cout << endl << endl;
	Show_array(arr, num);
	cout << endl << endl;
	Reverse_array(arr, num);
	cout << endl << endl;
	Show_array(arr, num);
	cout << endl << endl;
	getchar();
	return 0;
}

int  Fill_array(double ar[], int n)
{
	double val;
	int i = 0;
	cout << "��������ĵ� " << i + 1 << "��Ԫ��:";
	while (cin>>val)
	{
		ar[i++] = val;
		if (i == n)
		{
			break;
		}
		
		cout << "��������ĵ� " << i + 1 << "��Ԫ��:";
	}
	return i;
}

void Show_array(double ar[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "�� " << i + 1 << " ��Ԫ�أ�" << ar[i] << endl;
	}
}

void Reverse_array(double ar[], int n)
{
	double temp;
	for (int i = 1,j=n-2;i < n / 2;i++,j--)
	{
		temp = ar[i];
		ar[i] = ar[j];
		ar[j] = temp;
	}
}
