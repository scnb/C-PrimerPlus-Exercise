// 11-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stonewt.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void display(const Stonewt & st, int n);

const int N = 6;

int main()
{
	Stonewt st[N] = { Stonewt(1,0),Stonewt(2,0),Stonewt(3,0),Stonewt(0,0),Stonewt(0,0), Stonewt(0,0)};
	Stonewt s1(3,0);
	for (int i = 3;i < N;i++)
	{
		int stone = 0;
		double pds_left = 0;
		cout << "Ϊ�� " << i + 1 << " ��Ԫ�ظ�ֵ��\n";
		cout << "��Ӣʯ�㼸����\n";
		cin >> stone;
		cin >> pds_left;
		st[i] = creat_stone(stone, pds_left);//������Ⱥ�������Щ���⣬��Ϊ��=���س��˱Ƚ�Stonewt���󣬶����Ǹ�ֵ�������޷����и�ֵ��ֻ��ȡ������=
		//��һ�ֲ���ȡ������=�ķ������Ѷ�������õ�������������
		change_stone(st[i], stone, pds_left);
	}
	cout << "6��Ԫ�طֱ�Ϊ��\n";
	for (int i = 0;i < N;i++)
	{
		cout << st[i];
	}
	cout << "��С��Ԫ���ǣ�";
	Stonewt min_stone = st[0];
	Stonewt max_stone = st[0];
	int num_bigger_11stone = 0;
	for (int i = 0;i < N;i++)
	{
		if (st[i] < min_stone)
		{
			//min_stone = st[i];//ͬ����ֵ�����������Ҳ����˱Ƚ����㸳����ͨ����������ֵ
			swap(min_stone, st[i]);
		}
	}
	cout << min_stone << endl;
	cout << "����Ԫ���ǣ�";
	for (int i = 0;i < N;i++)
	{
		if (st[i] > max_stone)
		{
			//max_stone = st[i];//ͬ��
			swap(max_stone, st[i]);
		}
		if (st[i] >= s1)
		{
			num_bigger_11stone++;
		}
	}
	cout << max_stone;
	cout << "���ڵ���3Ӣʯ��Ķ����� " << num_bigger_11stone << " ����\n";
	getchar();
	getchar();
	return 0;
}

void display(const Stonewt & st, int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "Wow! ";
		cout << st;
	}
}