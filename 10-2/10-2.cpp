// 10-2.cpp : �������̨Ӧ�ó������ڵ㡣
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

