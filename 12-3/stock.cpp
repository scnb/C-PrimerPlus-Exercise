// 10-4.cpp : 定义控制台应用程序的入口点。
//在定义成员函数时，必须使用作用域解析运算符
//构造函数的名称必须与类名相同

#include "stdafx.h"
#include <iostream>
#include "stock.h"
#include <cstring>


Stock::Stock()//默认构造函数
{
	std::cout << "Default constructor called\n";
	company = new char[10];
	strcpy(company, "no name");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char co[MAX_LEN], long n, double pr)//显示构造函数
{
	std::cout << "Constructor using: " << co << " called\n";
	company = new char[strlen(co) + 1];
	strcpy(company, co);
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; " << company << " shares set to 0.\n";
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	total_val = shares*share_val;
}

Stock::~Stock()//析构函数
{
	delete[] company;
	std::cout << "Bye, " << company << "!\n";
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative. " << "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares selled can't be negative. " << "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell shares more than you have. " << "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

/*void Stock::show()const
{
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "Company: " << company
		<< " Shares: " << shares << "\n";
	cout << " Share price $" << share_val;
	cout.precision(2);
	cout << " Total worth:$" << total_val << '\n';
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}*/

ostream & operator<<(ostream & os, const Stock & t)
{
	using std::ios_base;
	ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = os.precision(3);
	os << "Company: " << t.company << "shares: " << t.shares << "\n";
	os << " Share price $" << t.share_val;
	os.precision(2);
	os << " Total worth:$" << t.total_val << '\n';
	os.setf(orig, ios_base::floatfield);
	os.precision(prec);
	return os;
}

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)
	{
		return s;
	}
	else
	{
		return *this;
	}
}