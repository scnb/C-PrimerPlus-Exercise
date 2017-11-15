// 12-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string2.h"
#include <iostream>
using namespace std;

int main()
{
	String s1(" and I am a C++ student.");
	String s2 ="Please enter your name: ";//先显示构造函数，再复制构造函数
	String s3;
	cout << s2;
	cin >> s3;
	s2 = ("My name is " + s3);
	cout << s2 << ".\n";
	s2 = (s2 + s1);
	s2.stringup();
	cout << "The string:\n" << s2 << " contains " << s2.has('A') << " 'A' characters in it.\n";
	s1 = "red";
	String rgb[3] = { String(s1),String("green"),String("blue") };
	cout << "Enter the name of a primary color for mixing light: ";
	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0;i < 3;i++)
		{
			if (ans == rgb[i])
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if (success)
		{
			break;
		}
		else
		{
			cout << "Try again!\n";
		}
	}
	cout << "Bye\n";
	getchar();
    return 0;
}

