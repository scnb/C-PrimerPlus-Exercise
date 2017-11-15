// 10-7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Plorg.h"
#include <iostream>

int main()
{
	using namespace std;
	Plorg p1;
	p1.showplorg();
	p1.change_CI(2);
	p1.showplorg();
	getchar();
    return 0;
}

