// 13-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "port.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	VintagePort vp1;
	VintagePort vp2("茅台", 10, "茅台酒", 1900);
	VintagePort vp3 = vp2;
	VintagePort vp4;
	vp4 = vp1;
	cout << vp1 << endl;
	cout << vp2 << endl;
	cout << vp3 << endl;
	cout << vp4 << endl;
	getchar();
    return 0;
}

