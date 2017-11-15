// 16-9.cpp : �������̨Ӧ�ó������ڵ㡣
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
	vector<int> vi0(N);											 //vector����֧��������ʣ���������[]
	list<int> li(N);											//list������֧��������ʣ���������[]
	for (int i = 0;i < N;i++)
	{
		vi0[i] = rand() % 10000;
		li.push_back(vi0[i]);
	}
	vector<int> vi(N);
	vi = vi0;
	//ʹ��STL�㷨��vi�������򣬲�����ʱ��
	{
		clock_t  start = clock();
		sort(vi.begin(), vi.end());
		clock_t end = clock();
		cout << "ʹ��STL�㷨��vi����������ʱ��" << (double)(end - start) / CLOCKS_PER_SEC<<endl;
	}
	//ʹ��list��sort()������li�������򣬲�����ʱ��
	{
		clock_t start = clock();
		li.sort();
		clock_t end = clock();
		cout << "ʹ��list������vi����������ʱ��" << (double)(end - start) / CLOCKS_PER_SEC << endl;
	}
	//��li����Ϊδ�����vi
	li.clear();											//�Ƚ�li���
	for (int i = 0;i < N;i++)
	{
		li.push_back(vi0[i]);
	}
	//��li�����ݸ��Ƶ�vi�У���vi�������򣬲���������Ƶ�li�У���������һ�е�ʱ��
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
		cout << "����һЩ�������ʱ�䣺" << (double)(end - start) / CLOCKS_PER_SEC;
	}
	getchar();
    return 0;
}

