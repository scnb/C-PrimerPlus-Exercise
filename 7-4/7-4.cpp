// 7-4.cpp : �������̨Ӧ�ó������ڵ㡣
//�����⣬���㲻�������
//���������probability�����У�forѭ�����ж���䣬Ӧ����p>0,����д����picks>0;��͵��³�����������ѭ�������µ�����������������ⲻ�����������ֲ���ϸ�ļ�������


#include "stdafx.h"
#include <iostream>
using namespace std;
long double probability(int numbers, int picks);

int main()
{
	int numbers_1, picks_1, numbers_2, picks_2;
	long double result_1, result_2;
	cout << "�����һ��һ�������ֺ�ѡ�������:";
	cin >> numbers_1;
	cin >> picks_1;

	cout << "����ڶ���һ�������ֺ�ѡ�������:";
	cin >> numbers_2;
	cin >> picks_2;
	result_1 = probability(numbers_1, picks_1);
	cout << result_1 << endl;

	result_2 = probability(numbers_2, picks_2);
	cout << "�񽱵ĸ���Ϊ��" << 1/(result_1*result_2);
	getchar();
	getchar();
    return 0;
}

long double probability(int numbers, int picks)
{
	long double result = 1.0;
	long double n;
	int p;
	for (n = numbers, p = picks;p >0;n--, p--)
	{
		result = result*n / p;
	}
	return result;
}

