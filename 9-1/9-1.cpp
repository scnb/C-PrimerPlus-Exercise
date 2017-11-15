// 9-1.cpp : 定义控制台应用程序的入口点。
//多文件程序

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "9-1.h"
golf person[3];
int main()
{
	using namespace std;
	int i;
	
	golf test;
	setgolf(test, "shangchao", 20);
	showgolf(test);
	for (i = 0;i < 3;i++)
	{
		setgolf(person[i]);
		if (!strcmp(person[i].fullname, "\0"))  //不知道为什么person[i].fullname=="\0"不行//person[i].fullname[i]==0和'\0'都行
		{										//因为字符数组不能直接与字符串进行比较，但是string对象可以
			person[i].handicap = 0;
			break;
		}
	}
	for (i = 0;i < 3;i++)
	{
		showgolf(person[i]);
	}
	getchar();
    return 0;
}

