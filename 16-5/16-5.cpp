// 16-5.cpp : 定义控制台应用程序的入口点。
//
/*
reduce()函数的作用：
①对数组进行排序
②删除重复的值
③返回缩减后数组中元素的数目

要求：使用STL编写该函数
新增要求：使用模板函数：
	template<class T>
	int reduce(T ar[],int n);
*/

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::unique;
using std::vector;

template<class T>
int	reduce(T ar[], int n);

int main()
{
	int N;
	long ar[10] = { 2,4,1,3,2,1,3,5,8,7 };
	string st[5] = { "shangchao","zhaosong","yangguoming","abc","shangchao" };
	N = reduce(ar, 10);
	cout << "经过缩减后的数组有" << N << "个元素。" << endl;
	for (int i = 0;i < N;i++)
	{
		cout << ar[i] << ' ';
	}
	N = reduce(st, 5);
	cout << endl;

	cout << "经过缩减后的数组有" << N << "个元素。" << endl;
	for (int i = 0;i < N;i++)
	{
		cout << st[i] << ' ';
	}
	getchar();
	return 0;
}

template<class T>
int	reduce(T ar[], int n)					//数组名，元素个数
{
	vector<T> temp;
	for (int i = 0;i < n;i++)				//将数组内容转存到string对象中
	{
		temp.push_back(ar[i]);
	}
	sort(temp.begin(), temp.end());										//先排序
	vector<T>::iterator new_end = unique(temp.begin(), temp.end());		//再去重
	int j = 0;
	for (vector<T>::iterator i = temp.begin();i < new_end;i++,j++)		//在声明vector类型的迭代器时，必须还有表示清楚是哪种类型
	{
		ar[j] = temp[j];
	}
	return j;
}
