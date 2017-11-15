#include "stdafx.h"
#include "Account.h"
#include <iostream>

using namespace std;

ACCOUNT::ACCOUNT()
{
	name = "name";
	ID = 0;
	balance = 0.0;
}

ACCOUNT::ACCOUNT(const string & str, int id, double money)
{
	name = str;
	ID = id;
	balance = money;
}

void ACCOUNT::deposit(double money)
{
	balance += money;
}

int  ACCOUNT::withdraw(double money)
{
	if (money > balance)
	{
		std::cout << "Your account doesn't have so much money.\n";
		return 1;
	}
	else
	{
		balance -= money;
	}
	return 0;
}

void ACCOUNT::show() const
{
	cout << "Name: " << name << endl;
	cout << "ID: " << ID << endl;
	cout << "balance: " << balance << endl;
}