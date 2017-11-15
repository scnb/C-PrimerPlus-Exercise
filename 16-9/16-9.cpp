// 16-9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <random>
#include <ctime>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;

const int N = 100000;

int main()
{
	vector<int> vi0(N);											 //vector容器支持随机访问，即可以用[]
	list<int> li(N);											//list容器不支持随机访问，即不能用[]
	for (int i = 0;i < N;i++)
	{
		vi0[i] = rand() % 10000;
		li.push_back(vi0[i]);
	}
	vector<int> vi(N);
	vi = vi0;
	//使用STL算法对vi进行排序，并计算时间
	{
		clock_t  start = clock();
		sort(vi.begin(), vi.end());
		clock_t end = clock();
		cout << "使用STL算法对vi进行排序，用时：" << (double)(end - start) / CLOCKS_PER_SEC<<endl;
	}
	//使用list的sort()方法对li进行排序，并计算时间
	{
		clock_t start = clock();
		li.sort();
		clock_t end = clock();
		cout << "使用list方法对vi进行排序，用时：" << (double)(end - start) / CLOCKS_PER_SEC << endl;
	}
	//将li重置为未排序的vi
	li.clear();											//先将li清空
	for (int i = 0;i < N;i++)
	{
		li.push_back(vi0[i]);
	}
	//将li的内容复制到vi中，对vi进行排序，并将结果复制到li中，并计算这一切的时间
	{
		clock_t start = clock();
		int temp;
		for (int i = 0;i < N;i++)
		{
			temp = li.front();
			vi[i] = temp;
		}
		sort(vi.begin(), vi.end());
		li.clear();
		for (int i = 0;i < N;i++)
		{
			li.push_back(vi[i]);
		}
		clock_t end = clock();
		cout << "经过一些操作后的时间：" << (double)(end - start) / CLOCKS_PER_SEC;
	}
	getchar();
    return 0;
}

