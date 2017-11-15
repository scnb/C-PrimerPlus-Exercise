// 16-4.cpp : 定义控制台应用程序的入口点。
//
/*
	reduce()函数的作用：
		①对数组进行排序
		②删除重复的值
		③返回缩减后数组中元素的数目

	要求：使用STL编写该函数
*/

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::unique;

int	reduce(int ar[], int n);

int main()
{
	int N;
	int ar[10] = { 2,4,1,3,2,1,3,5,8,7 };
	N = reduce(ar, 10);
	cout << "经过缩减后的数组有" << N << "个元素。" << endl;
	for (int i = 0;i < N;i++)
	{
		cout << ar[i] << ' ';
	}
	getchar();
    return 0;
}

int	reduce(int ar[], int n)					//数组名，元素个数
{
	string temp;
	for (int i = 0;i < n;i++)				//将数组内容转存到string对象中
	{
		temp += ar[i];
	}
	sort(temp.begin(), temp.end());			//先排序
	string::iterator new_end = unique(temp.begin(), temp.end());		//再去重
	int j = 0;
	for (string::iterator i = temp.begin();i < new_end;i++,j++)
	{
		ar[j] = temp[j];
	}
	return j;
}
