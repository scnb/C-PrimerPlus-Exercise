// 9-2.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void strcount(string str);

int main()
{
	string input;
	cout << "Enter a line:\n";
	getline(cin, input);//这种输入方式能够把空行也输入进去，但是cin>>input就不能输入空行
	while (cin)//输入符合要求
	{	
		if (input == "")
		{
			break;
		}
		strcount(input);
		cout << "Enter next line(empty line to quit):\n";
		getline(cin, input);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(string str)
{
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	while (str[count]!='\0')
	{
		count++;
	}
	total = total + count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}