#include "stdafx.h"
#include "emp.h"

//abstr_emp类的方法
abstr_emp::abstr_emp()
{
	fname = "none";
	lname = "none";
	job = "none";
}

abstr_emp::abstr_emp(const string & fn, const string & ln, const string & j)
{
	fname = fn;
	lname = ln;
	job = j;
}

void abstr_emp::ShowAll()const
{
	cout << "First Name: " << fname << " Last Name: " << lname << " Job: " << job << endl;
}

void abstr_emp::SetAll()
{
	cout << "Enter first name: ";
	cin >> fname;
	cout << "Enter last name: ";
	cin >> lname;
	cout << "Enter the job: ";
	cin >> job;
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
	os << e.fname << " " << e.lname << " : " << e.job << endl;
	return os;
}

abstr_emp::~abstr_emp()
{

}

//employee类的方法
employee::employee():abstr_emp()
{

}

employee::employee(const string & fn, const string & ln, const string & j) : abstr_emp(fn, ln, j)
{

}

void employee::ShowAll()const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

//manager类的方法
manager::manager() :abstr_emp()
{
	inchargeof = 0;
}

manager::manager(const string & fn, const string & ln, const string & j, int ico) : abstr_emp(fn, ln, j)
{
	inchargeof = ico;
}

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e)
{
	inchargeof = ico;
}

manager::manager(const manager & m):abstr_emp((const abstr_emp &)m)
{
	inchargeof = m.InChargeOf();
}

void manager::ShowAll()const
{
	abstr_emp::ShowAll();
	cout << "inchargeof: " << inchargeof << endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter the number of inchargeof: ";
	cin >> inchargeof;
}

//fink类的方法
fink::fink():abstr_emp()
{

}

fink::fink(const string & fn, const string & ln, const string & j, const string & rpo) : abstr_emp(fn, ln, j)
{
	reportsto = rpo;
}

fink::fink(const abstr_emp & e, const string & rpo):abstr_emp(e)
{
	reportsto = rpo;
}

fink::fink(const fink & e) : abstr_emp((const abstr_emp &)e)
{
	reportsto = (const string &)e;
}

void fink::ShowAll()const
{
	abstr_emp::ShowAll();
	cout << "reportsto: " << reportsto << endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter reportsto: ";
	cin >> reportsto;
}

//highfink类的方法
highfink::highfink():manager(), fink()
{

}

highfink::highfink(const string & fn, const string & ln, const string & j, const string & rpo, int ico) : manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{

}

highfink::highfink(const abstr_emp & e, const string & rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
{

}

highfink::highfink(const fink & f, int ico) : abstr_emp((abstr_emp &)f), manager((abstr_emp &)f, ico), fink(f)
{
}

highfink::highfink(const manager & m, const string & rpo) : abstr_emp((abstr_emp &)m), manager(m), fink((abstr_emp &)m, rpo)
{

}


highfink::highfink(const highfink & h):abstr_emp((const abstr_emp &)h),manager((const manager &)h),fink((const fink &)h)
{

}

void highfink::ShowAll()const
{
	manager::ShowAll();
	cout << "reportsto: " << fink::ReportsTo()<< endl;
}

void highfink::SetAll()
{
	manager::SetAll();
	//fink::SetAll();两次调用abstr_emp::SetAll(),有问题
	fink::SetReportsTo();
}