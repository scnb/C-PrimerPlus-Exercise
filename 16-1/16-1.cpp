// 16-1.cpp : 定义控制台应用程序的入口点。
//判断用户输入的字符串是不是回文字符串，为了简便考虑，不考虑大小写、标点符号和空格等问题。

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool is_huiwen(string st);

int main()
{
	string input;
	cout << "输入字符串，不能包含标点符号，必须全部大写或小写：\n";
	while (cin >> input)
	{
		if (input == "quit")
		{
			break;
		}
		else
		{
			if (is_huiwen(string(input)))
			{
				cout << "该字符串是回文字符串！\n";
			}
			else
			{
				cout << "该字符串不是回文字符串！\n";
			}
			cout << "输入字符串，不能包含标点符号，必须全部大写或小写(quit to quit)：\n";
		}
	}
	getchar();
    return 0;
}

bool is_huiwen(string st)				//判断是不是回文字符串
{
	string temp;
	int i, j;
	for (i = st.size() - 1;i >= 0;i--)
	{
		temp += st[i];
	}
	return (st == temp);
}