// 5-8.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char  word[10];
	cout << "enter words(type \"done\" to quit):";
	cin >> word;//ֱ��д����������ƣ�����������׵�ַ
	int count = 0;
	while (strcmp(word,"done")!=0)//��Ϊ��char���飬���Բ���ֱ���ù�ϵ������Ƚϣ�������strcmp�������бȽ�
	{
		++count;
		cin >> word;
	}
	cout << "һ��������" << count << "�����ʡ�" << endl;
	getchar();
	getchar();
    return 0;
}

