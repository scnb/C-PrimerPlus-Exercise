#include "stdafx.h"
#include "cd2.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

Cd::Cd(char * s1, char * s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	label = new char[strlen(s2) + 1];
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[MAX];
	label = new char[MAX];
	strcpy(performers, "商超");
	strcpy(label, "Null");
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}

void Cd::Report()const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
	cout << endl;
}

Cd & Cd::operator=(const Cd & d)
{
	Cd temp;
	temp.performers = new char[strlen(d.performers) + 1];
	temp.label = new char[strlen(d.label) + 1];
	strcpy(temp.performers, d.performers);
	strcpy(temp.label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return temp;
}

Classic::Classic(char *s, char *s1, char * s2, int n, double x) : Cd(s1, s2, n, x)
{
	main_work = new char[strlen(s) + 1];
	strcpy(main_work, s);
}

Classic::Classic(char * s, const Cd & c) : Cd(c)
{
	main_work = new char[strlen(s) + 1];
	strcpy(main_work, s);
}

Classic::Classic() : Cd()
{
	main_work = new char[MAX];
	strcpy(main_work, "null");
}

Classic::~Classic()
{
}
void Classic::Report()const
{
	Cd::Report();//基类部分直接调用基类的Report()函数即可
	cout << "Main works: " << main_work << endl;
	cout << endl;
}