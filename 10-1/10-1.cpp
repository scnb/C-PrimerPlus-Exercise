// 10-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Account.h"
#include <iostream>

int main()
{
	using namespace std;
	ACCOUNT acc1;
	acc1.show();
	ACCOUNT acc2 = ACCOUNT("shangchao", 1, 100);
	acc2.show();
	cout << "账户2存钱200：\n";
	acc2.deposit(200);
	acc2.show();
	cout << "账户2取钱100：\n";
	acc2.withdraw(100);
	acc2.show();
	getchar();
    return 0;
}

