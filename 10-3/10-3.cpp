// 10-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "golf.h"
#include <iostream>

int main()
{
	using namespace std;
	Golf g1;
	g1.showgolf();
	Golf g2("shangchao", 20);
	g2.showgolf();
	g1.reset_handicap(10);
	g1.showgolf();
	getchar();
	getchar();
    return 0;
}

