// 6-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	char ch;
	while ((ch = cin.get()) != '@')
	{
		if (ch >= 'a' && ch <= 'z')
		{
			cout << char(ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			cout << char(ch + 32);
		}
	}
	getchar();
	getchar();
    return 0;
}

