// 9-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

struct chaff
{
	char dross[20];
	int slag;
};

char buff[200];

int main()
{
	using namespace std;
	chaff *  ps[2];
	char str[20];
	ps[0] = new (buff) chaff;
	ps[1] = new (new chaff) chaff;
	for (int i = 0;i < 2;i++)
	{
		cout << "给chaff的字符数组赋值：";
		cin.getline(str, 20);
		strcpy_s(ps[i]->dross, str);
		cout << "给chaff1的整型赋值：";
		cin >> ps[i]->slag;
		cin.get();
	}
	for (int i = 0;i < 2;i++)
	{
		cout << "chaff的字符数组：";
		cout << ps[i]->dross;
		cout << endl;
		cout << "chaff的整型：";
		cout << ps[i]->slag;
		cout << endl;
	}
	getchar();
    return 0;
}

