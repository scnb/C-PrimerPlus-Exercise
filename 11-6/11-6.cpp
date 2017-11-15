// 11-6.cpp : 定义控制台应用程序的入口点。
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
		cout << "为第 " << i + 1 << " 个元素赋值：\n";
		cout << "几英石零几磅：\n";
		cin >> stone;
		cin >> pds_left;
		st[i] = creat_stone(stone, pds_left);//在这个等号这里有些问题，因为把=重载成了比较Stonewt对象，而不是赋值，导致无法进行赋值，只得取消重载=
		//另一种不用取消重载=的方法，把对象的引用当作参数给函数
		change_stone(st[i], stone, pds_left);
	}
	cout << "6个元素分别为：\n";
	for (int i = 0;i < N;i++)
	{
		cout << st[i];
	}
	cout << "最小的元素是：";
	Stonewt min_stone = st[0];
	Stonewt max_stone = st[0];
	int num_bigger_11stone = 0;
	for (int i = 0;i < N;i++)
	{
		if (st[i] < min_stone)
		{
			//min_stone = st[i];//同样赋值运算符在这里也变成了比较运算赋，得通过函数来赋值
			swap(min_stone, st[i]);
		}
	}
	cout << min_stone << endl;
	cout << "最大的元素是：";
	for (int i = 0;i < N;i++)
	{
		if (st[i] > max_stone)
		{
			//max_stone = st[i];//同上
			swap(max_stone, st[i]);
		}
		if (st[i] >= s1)
		{
			num_bigger_11stone++;
		}
	}
	cout << max_stone;
	cout << "大于等于3英石大的对象有 " << num_bigger_11stone << " 个。\n";
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