// 13-3.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "��ʾ�������\n";
	shirt.View();
	cout << "��ʾlacksDMA�����\n";
	ballon.View();
	cout << "��ʾhasDMA�����\n";
	map.View();
	lacksDMA ballon2(ballon);//���ø��ƹ��캯��
	cout << "lacksDMA�����ĸ��ƣ�\n";
	ballon2.View();
	hasDMA map2;
	map2 = map;//���ø�ֵ�����
	cout << "hasDMA�����ĸ�ֵ��\n";
	map2.View();
	getchar();
	return 0;
}


