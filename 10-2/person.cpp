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
	cout << "姓名是："<<fname<< "," << lname << endl;
}

void Person::FormalShow() const
{
	cout << "姓名是：" << lname << "," << fname << endl;
}