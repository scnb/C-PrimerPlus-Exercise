// 16-4.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
	reduce()���������ã�
		�ٶ������������
		��ɾ���ظ���ֵ
		�۷���������������Ԫ�ص���Ŀ

	Ҫ��ʹ��STL��д�ú���
*/

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::unique;

int	reduce(int ar[], int n);

int main()
{
	int N;
	int ar[10] = { 2,4,1,3,2,1,3,5,8,7 };
	N = reduce(ar, 10);
	cout << "�����������������" << N << "��Ԫ�ء�" << endl;
	for (int i = 0;i < N;i++)
	{
		cout << ar[i] << ' ';
	}
	getchar();
    return 0;
}

int	reduce(int ar[], int n)					//��������Ԫ�ظ���
{
	string temp;
	for (int i = 0;i < n;i++)				//����������ת�浽string������
	{
		temp += ar[i];
	}
	sort(temp.begin(), temp.end());			//������
	string::iterator new_end = unique(temp.begin(), temp.end());		//��ȥ��
	int j = 0;
	for (string::iterator i = temp.begin();i < new_end;i++,j++)
	{
		ar[j] = temp[j];
	}
	return j;
}
