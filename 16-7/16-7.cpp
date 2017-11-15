// 16-7.cpp : 定义控制台应用程序的入口点。
//彩票卡游戏：卡片上带有编号的圆点，其中一些圆点被随机选中。

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::random_shuffle;
using std::cin;
using std::cout;
using std::endl;

vector<int> lotto(int sum, int chose);

int main()
{
	vector<int> winners;
	winners = lotto(15, 6);
	for (int i = 0;i < winners.size();i++)
	{
		cout << winners[i] << ' ';
	}
	getchar();
    return 0;
}

vector<int> lotto(int sum, int chose)
{
	vector<int> temp(sum);
	vector<int> A(chose);
	for (int i = 0;i < sum;i++)
	{
		temp[i] = i+1;
	}
	for (int i = 0;i < chose;i++)
	{
		random_shuffle(temp.begin()+i, temp.end());				//必须保证每次取得的圆点编号是不重复的
		A[i] = temp[i];										    //保证圆点编号是不重复的
	}
	return A;
}
