// 2-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void first(void);
void second(void);

int main()
{
	//cout << "Three bling mice." << endl;
	first();
	first();
	second();
	second();
	//cout << "See how they run." << endl;
	cin.get();
    return 0;
}

void first(void)
{
	cout << "Three bling mice." << endl;
}

void second(void)
{
	cout << "See how they run." << endl;
}

