#include "stdafx.h"
#include "person.h"
#include <iostream>

using namespace std;

Person::Person(const std::string & ln, const std::string fn)
{
	lname = ln;
	fname = fn;
}

void Person::show() const
{
	cout << "�����ǣ�"<<fname<< "," << lname << endl;
}

void Person::FormalShow() const
{
	cout << "�����ǣ�" << lname << "," << fname << endl;
}