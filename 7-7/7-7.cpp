// 7-7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int * fill_array( int * begin,  int * end);
void show_array( int * begin,  int * end);
void revaule( int * begin,  int * end);

int main()
{
	int arr[6];
	int * begin = arr;
	int * end = arr + 6;  //����������Ӧ����arr+7������ʶ����β����һ��Ԫ�ء�     �߷�
	int * pos;
	pos=fill_array(begin, end);
	cout << endl;
	show_array(begin, pos);
	revaule(begin, pos);
	cout << endl;
	show_array(begin, pos);
	getchar();
	getchar();
	getchar();
    return 0;
}

int * fill_array( int * begin,  int * end)
{
	int val;
	int * pos=begin;
	
	int i = 1;
	for (pos == begin;pos <= end;pos++)
	{
		cout << "Number " << i << ": ";
		if (cin >> val)
		{   
			*pos = val;
			if (i+1 == 7)
			{
				cout << "quit" << endl;
				return pos;
			}
			
			i++;
			continue;
		}
		else
		{
			return pos-1;
		}
	}
}

void show_array( int * begin, int * end)
{
	int val;
	int * pos = begin;
	for (pos == begin;pos <= end;pos++)
	{
		cout << *pos << endl;
	}
}

void revaule( int * begin,  int * end)
{
	int val;
	int * pos = begin;
	for (pos == begin;pos <= end;pos++)
	{
		*pos *= 2;
	}
}
