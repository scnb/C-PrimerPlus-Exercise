// 2-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int distance;
	int yard;
	cout << "请输入距离（单位为long）： ";
	cin >> distance;
	yard = 220 * distance;
	cout << "您输入的距离为 " << yard << "yard" << endl;
	cin.get();
	cin.get();
    return 0;
}

