// 6-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void showmenu(void);

struct BOP
{
	char fullname[20];
	char title[20];
	char bopname[20];
	int preference;//0=fullname,1=title,2=bopname
};

int main()
{
	showmenu();
	struct BOP people[3] =
	{
		{
			"shangchao",
			"pm",
			"sc",
			0,
		},
		{
			"zhaosong",
			"pr",
			"zs",
			1,
		},
		{
			"yangguoming",
			"au",
			"ygm",
			2,
		},
	};
	cout << "enter your choice:";
	char ch;
	cin >> ch;
	while (ch != 'q')
	{
		switch (ch)
		{
		case 'a':cout << people[0].fullname << endl << people[1].fullname <<endl<< people[2].fullname << endl;break;
		case 'b':cout << people[0].title << endl << people[1].title << endl << people[2].title << endl;break;
		case 'c':cout << people[0].bopname << endl << people[1].bopname << endl << people[2].bopname << endl;break;
		case 'd':
			if (0 == people[0].preference)
			{
				cout << people[0].fullname << endl;
			}
			else if (1 == people[0].preference)
			{
				cout << people[0].title << endl;
			}
			else
			{
				cout << people[0].bopname << endl;
			}
			//
			if (0 == people[1].preference)
			{
				cout << people[1].fullname << endl;
			}
			else if (1 == people[1].preference)
			{
				cout << people[1].title << endl;
			}
			else
			{
				cout << people[1].bopname << endl;
			}
			//
			if (0 == people[2].preference)
			{
				cout << people[2].fullname << endl;
			}
			else if (1 == people[2].preference)
			{
				cout << people[2].title << endl;
			}
			else
			{
				cout << people[2].bopname << endl;
			}
			break;
		default:cout << "Are you stupied? enter the right letter!!";
		}
		cin >> ch;
	}
	//getchar();
	//getchar();
    return 0;
}

void showmenu()
{
	cout << "Benevolent Order of Programmers Report:" << endl;
	cout << "a. display by name           ";
	cout << "b. display by title          \n";
	cout << "c. display by bopname        ";
	cout << "d. display by preference     \n";
	cout << "q. quit\n";
}

