// 16-2.cpp : 定义控制台应用程序的入口点。
//判断用户输入的字符串是不是回文字符串，相比于16-1，该程序中考虑标点符号、空格、大小写的问题。
/*
	几点考虑：
		①把整个字符串都转换成大写形式
		②把空格和标点符号都删掉

	借助了cctype头文件中的几个函数：
		①isnum()：判断是否是数字
		②isalpha()：判断是否是字母

	自定义了两个函数：
		①convert()：将字符串都转换成大写形式，然后把空格和标点都删掉
		②is_huiwen()：判断转换之后的字符串是否是回文字符串
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool is_huiwen(string st);
string  convert(string & st);

int main()
{
	string input;
	cout << "输入字符串：\n";
	while (getline(cin,input))
	{
		if (input == "quit")
		{
			break;
		}
		else
		{
			input = convert(input);
			if (is_huiwen(string(input)))
			{
				cout << "该字符串是回文字符串！\n";
			}
			else
			{
				cout << "该字符串不是回文字符串！\n";
			}
			cout << "输入字符串(quit to quit)：\n";
		}
	}
	getchar();
	return 0;
}

string  convert(string & st)
{
	string temp;
	int i;
	for (i = 0;i < st.size();i++)
	{
		if (isalnum(st[i]) || isalpha(st[i]))
		{
			st[i] = toupper(st[i]);
			temp += st[i];
		}	
	}
	cout << "转换后的字符串：" << temp << endl;
	return temp;
}

bool is_huiwen(string st)				//判断是不是回文字符串
{
	string temp;
	int i;
	for (i = st.size() - 1;i >= 0;i--)
	{
		temp += st[i];
	}
	return (st == temp);
}
