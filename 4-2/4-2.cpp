// 4-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>  //注意，该头文件不能写成cstring 或string.h   适用于string对象

using namespace std;

int main()
{
	string name;
	string dessert;
	cout << "Enter your name: ";
	cin >> name;//cin作为参数，表示输入
	cout << endl;
	cout << "Enter your favorite dessert: ";
	cin>>dessert;
	cout << endl;
	cout << "I have some declious " << dessert << " for you, " << name << endl;
	getchar();
	getchar();
	return 0;
}

