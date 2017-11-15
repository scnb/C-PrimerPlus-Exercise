// 13-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "dma.h"
#include <iostream>


int main()
{
	using std::cout;
	using std::endl;
	baseDMA shirt("base","Portabelly", 8);
	lacksDMA ballon("red","lacks","Blimpo", 4);
	hasDMA map("Meractor","has","Buffalo Keys", 5);
	cout << "显示基类对象：\n";
	shirt.View();
	cout << "显示lacksDMA类对象：\n";
	ballon.View();
	cout << "显示hasDMA类对象：\n";
	map.View();
	lacksDMA ballon2(ballon);//调用复制构造函数
	cout << "lacksDMA类对象的复制：\n";
	ballon2.View();
	hasDMA map2;
	map2 = map;//调用赋值运算符
	cout << "hasDMA类对象的赋值：\n";
	map2.View();
	getchar();
	return 0;
}


