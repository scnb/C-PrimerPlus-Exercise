// 5-8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cout << "enter words(type \"done\" to quit):";
	cin >> word;//直接写成数组的名称，即该数组的首地址
	int count = 0;
	while (word!="done")//因为是char数组，所以不能直接用关系运算符比较，必须用strcmp函数进行比较
	{
		++count;
		cin >> word;
	}
	cout << "一共输入了" << count << "个单词。" << endl;
	getchar();
	getchar();
	return 0;
}


