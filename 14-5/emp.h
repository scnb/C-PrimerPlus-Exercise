#pragma once
#ifndef EMP_H_
#define EMP_H_

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class abstr_emp
{
private:
	string fname;
	string lname;
	string job;
public:
	abstr_emp();
	abstr_emp(const string & fn, const string & ln, const string & j);
	virtual void ShowAll()const;//虚函数，程序将根据引用或指针指向的对象类型来决定使用哪个函数
	virtual void SetAll();
	friend std::ostream & operator<<(std::ostream & os, const abstr_emp & e);
	virtual ~abstr_emp() = 0;//虚基类
};

class employee :public abstr_emp
{
public:
	employee();
	employee(const string & fn, const string & ln, const string & j);
	virtual void ShowAll()const;
	virtual void SetAll();
};

class manager :virtual public abstr_emp
{
private:
	int inchargeof;//number of abstr_emp managed被管理的abstr_emp对象
protected:
	int InChargeOf()const { return inchargeof; }
	int & InChargeOf() { return inchargeof; }
	void SetInchargeOf() { cout << "Enter incharegeof: ";cin >> inchargeof; }
public:
	manager();
	manager(const string & fn, const string & ln, const string & j, int ico = 0);
	manager(const abstr_emp & e, int ico);
	manager(const manager & m);
	virtual void ShowAll()const;
	virtual void SetAll();
};

class fink :virtual public abstr_emp
{
private:
	string reportsto;//to whom fink reports
protected:
	const string ReportsTo()const { return reportsto; }
	string & ReportsTo() { return reportsto; }
	void SetReportsTo() { cout << "Enter reportsto: ";cin >> reportsto; }
public:
	fink();
	fink(const string & fn, const string & ln, const string & j, const string & rpo);
	fink(const abstr_emp & e, const string & rpo);
	fink(const fink & e);
	virtual void ShowAll()const;
	virtual void SetAll();
};

class highfink :public manager, public fink
{
public:
	highfink();
	highfink(const string & fn, const string & ln, const string & j, const string & rpo, int ico);
	highfink(const abstr_emp & e, const string & rpo, int ico);
	highfink(const fink & f, int ico);
	highfink(const manager & m, const string & rpo);
	highfink(const highfink & h);
	virtual void ShowAll()const;
	virtual void SetAll();
};

#endif // !EMP_H_
