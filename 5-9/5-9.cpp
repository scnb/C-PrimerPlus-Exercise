// 5-8.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cout << "enter words(type \"done\" to quit):";
	cin >> word;//ֱ��д����������ƣ�����������׵�ַ
	int count = 0;
	while (word!="done")//��Ϊ��char���飬���Բ���ֱ���ù�ϵ������Ƚϣ�������strcmp�������бȽ�
	{
		++count;
		cin >> word;
	}
	cout << "һ��������" << count << "�����ʡ�" << endl;
	getchar();
	getchar();
	return 0;
}


