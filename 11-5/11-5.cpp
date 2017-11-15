// 11-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stonewt.h"
#include <iostream>
using std::cout;
using std::endl;
void display(const Stonewt & st, int n);

int main()
{
	Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);
	Stonewt total;
	Stonewt diff;
	Stonewt multi;
	total = wolfe + taft;
	diff = taft - wolfe;
	multi = wolfe * 2;
	cout << "The celebrity weighted ";
	cout << incognito;
	cout << "The detective weighted ";
	cout << wolfe;
	cout << "The President weighted ";
	cout << taft;
	cout << "The total of wolfe and tatf ";
	cout << total;
	cout << "The difference of wolfe and tatf ";
	cout << diff;
	cout << "The product of 2 and wolfe ";
	cout << multi;
	incognito = 276.8;
	taft = 325;
	cout << "After dinner,the celebrity weighted ";
	cout << incognito;
	cout << "After dinner,ther detective weighted ";
	cout << wolfe;
	display(taft, 2);
	cout << "The wrestler weighted even more.\n";
	display(422, 2);
	cout << "No stone left unearned.\n";
	getchar();
	return 0;
}

void display(const Stonewt & st, int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "Wow! ";
		cout << st << endl;
	}
}