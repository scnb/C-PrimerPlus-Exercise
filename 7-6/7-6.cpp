// 7-6.cpp : 定义控制台应用程序的入口点。
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
	cout << "输入数组的第 " << i + 1 << "个元素:";
	while (cin>>val)
	{
		ar[i++] = val;
		if (i == n)
		{
			break;
		}
		
		cout << "输入数组的第 " << i + 1 << "个元素:";
	}
	return i;
}

void Show_array(double ar[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "第 " << i + 1 << " 个元素：" << ar[i] << endl;
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
