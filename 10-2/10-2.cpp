// 10-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "person.h"
#include <iostream>

int main()
{
	using namespace std;
	Person one;
	one.show();
	one.FormalShow();
	Person two("shang");
	two.show();
	two.FormalShow();
	Person three("shang", "chao");
	three.show();
	three.FormalShow();
	getchar();
    return 0;
}

