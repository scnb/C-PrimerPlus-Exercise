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
	cout << "����������";
	cin.getline(g.fullname, Len);
	cout << "�����������";
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
	cout << "������" << g.fullname << endl;
	cout << "��������" << g.handicap << endl;
}