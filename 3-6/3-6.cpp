// 3-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int main()
{
	using namespace std;
	int km;
	cout << "输入驱车公里数：_";
	cout << '\b';
	cin >> km;
	int l;
	cout << "输入汽油使用了多少升：_";
	cout << '\b';
	cin >> l;
	cout << "汽车百公里耗油量为：" << 100 * (float(l) / km) << " 升。" << endl;
	getchar();
	getchar();
    return 0;
}

