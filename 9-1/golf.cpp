#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "9-1.h"



void setgolf(golf & g, const char * name, int hc)
{
	using namespace std;
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	using namespace std;
	cout << "输入姓名：";
	cin.getline(g.fullname, Len);
	cout << "输入击球数：";
	cin >> g.handicap;
	cin.get();
	if(g.fullname=="\n")
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	using namespace std;
	cout << "姓名：" << g.fullname << endl;
	cout << "击球数：" << g.handicap << endl;
}