// 16-5.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
reduce()���������ã�
�ٶ������������
��ɾ���ظ���ֵ
�۷���������������Ԫ�ص���Ŀ

Ҫ��ʹ��STL��д�ú���
����Ҫ��ʹ��ģ�庯����
	template<class T>
	int reduce(T ar[],int n);
*/

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::unique;
using std::vector;

template<class T>
int	reduce(T ar[], int n);

int main()
{
	int N;
	long ar[10] = { 2,4,1,3,2,1,3,5,8,7 };
	string st[5] = { "shangchao","zhaosong","yangguoming","abc","shangchao" };
	N = reduce(ar, 10);
	cout << "�����������������" << N << "��Ԫ�ء�" << endl;
	for (int i = 0;i < N;i++)
	{
		cout << ar[i] << ' ';
	}
	N = reduce(st, 5);
	cout << endl;

	cout << "�����������������" << N << "��Ԫ�ء�" << endl;
	for (int i = 0;i < N;i++)
	{
		cout << st[i] << ' ';
	}
	getchar();
	return 0;
}

template<class T>
int	reduce(T ar[], int n)					//��������Ԫ�ظ���
{
	vector<T> temp;
	for (int i = 0;i < n;i++)				//����������ת�浽string������
	{
		temp.push_back(ar[i]);
	}
	sort(temp.begin(), temp.end());										//������
	vector<T>::iterator new_end = unique(temp.begin(), temp.end());		//��ȥ��
	int j = 0;
	for (vector<T>::iterator i = temp.begin();i < new_end;i++,j++)		//������vector���͵ĵ�����ʱ�����뻹�б�ʾ�������������
	{
		ar[j] = temp[j];
	}
	return j;
}
