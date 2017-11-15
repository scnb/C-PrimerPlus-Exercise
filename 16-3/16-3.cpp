// 16-3.cpp : 定义控制台应用程序的入口点。
//从文件中读取单词，使用vector<string>对象而不是string数组，使用push_back()将字符串添加到容器中，
//并使用size()来确定容器中元素的个数，每次从文件中读取一个单词，所以用>>而不是getline()，单词应该
//以空格、制表符、换行符分隔开。

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <fstream>
#include <iterator>
#include <algorithm>					//包含for_each()函数

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::tolower;
using std::fstream;
using std::vector;
using std::iterator;

void Showword(string st);

int main()
{
	fstream in("words.txt");					//定义文件指针？
	vector<string> words;						
	string temp;	
	int i = 0;
	while (in>>temp)							//直接使用重载了的>>运算符读取数据
	{
		words.push_back(temp);					//利用push_back()方法向vector容器后面添加元素
	}
	for_each(words.begin(), words.end(), Showword);
	getchar();
	return 0;
}


void Showword(string st)
{
	cout << st << ' ';
}