// 4-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>  //ע�⣬��ͷ�ļ�����д��cstring ��string.h   ������string����

using namespace std;

int main()
{
	string name;
	string dessert;
	cout << "Enter your name: ";
	cin >> name;//cin��Ϊ��������ʾ����
	cout << endl;
	cout << "Enter your favorite dessert: ";
	cin>>dessert;
	cout << endl;
	cout << "I have some declious " << dessert << " for you, " << name << endl;
	getchar();
	getchar();
	return 0;
}

