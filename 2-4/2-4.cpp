// 2-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	cout << "请输入您的年龄:";
	int age;
	cin >> age;
	cout << "您的年龄包含 " << 12 * age << " 个月。" << endl;
	cin.get();
	cin.get();
    return 0;
}

