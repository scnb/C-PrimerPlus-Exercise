// 10-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "move.h"
#include <iostream>

int main()
{
	using namespace std;
	Move m1;
	m1.showmove();
	Move m2(2, 3);
	m2.showmove();
	Move m3 = m1.add(m2);
	m3.showmove();
	m1.reset(1, 1);
	m1.showmove();
	m3.reset();
	m3.showmove();
	getchar();
    return 0;
}

