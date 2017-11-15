// 12-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "cow.h"
#include <iostream>

int main()
{
	using namespace std;
	Cow c1;
	cout << "c1: " << endl;
	c1.ShowCow();
	Cow c2 = Cow("shangchao", "girl", 160);
	cout << "c2: " << endl;
	c2.ShowCow();
	Cow c5 = Cow("zhaosong", "eat", 180);
	cout << "c5: " << endl;
	c5.ShowCow();
	Cow c4;
	c4 = c5;
	cout << "c4: " << endl;
	c4.ShowCow();
	Cow c3 = c2;
	cout << "c3: " << endl;
	c3.ShowCow();
	
	getchar();
	return 0;
}

