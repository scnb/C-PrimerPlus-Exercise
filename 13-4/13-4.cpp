// 13-4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "port.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	VintagePort vp1;
	VintagePort vp2("ę́", 10, "ę́��", 1900);
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

