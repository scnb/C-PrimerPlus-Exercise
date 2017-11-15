// 6-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void showmenu(void);
int main()
{
	showmenu();
	char ch;
	int flag = 0;


	while (flag!=1)
	{
		cin >> ch;
		switch (ch)
		{
		case 'c':cout << "123";flag = 1;break;
		case 'p':cout << "456";flag = 1;break;
		case 't':cout << "789";flag = 1;break;
		case 'g':cout << "321";flag = 1;break;
		default:cout << "please enter A c,p,t or g:";
		}
	}
	getchar();
	getchar();
    return 0;
}

void showmenu()
{
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore" << "        ";
	cout << "p) pianist" << "        \n";
	cout << "t) tree" << "             ";
	cout << "g) game" << "         \n";
}

