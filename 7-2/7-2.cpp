// 7-2.cpp : 定义控制台应用程序的入口点。
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
	cout << "显示数组：" << endl;
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
	cout << "每次输入一个成绩(最多十个)，输入非数字字符退出输入：" << endl;
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
	return i;//返回有几个数
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
