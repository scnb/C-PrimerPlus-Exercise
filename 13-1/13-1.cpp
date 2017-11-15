// 13-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "cd.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Bravo(const Cd & disk);

int main()
{
	Cd c1("Beatles", "Captiol", 14 ,35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd * pcd = &c1;
	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();
	cout << "Using type cd * pointer to objects:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();
	cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);
	cout << "Testing assignment: ";
	Classic copy;//��Ϊ�ǵ���Ĭ�Ϲ��캯��������ͬʱҲ������Cd��Ĭ�Ϲ��캯��  
	copy = c2;
	copy.Report();
	getchar();
    return 0;
}

void Bravo(const Cd & disk)
{
	disk.Report();
}