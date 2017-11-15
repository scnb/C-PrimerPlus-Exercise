// 16-7.cpp : �������̨Ӧ�ó������ڵ㡣
//��Ʊ����Ϸ����Ƭ�ϴ��б�ŵ�Բ�㣬����һЩԲ�㱻���ѡ�С�

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::random_shuffle;
using std::cin;
using std::cout;
using std::endl;

vector<int> lotto(int sum, int chose);

int main()
{
	vector<int> winners;
	winners = lotto(15, 6);
	for (int i = 0;i < winners.size();i++)
	{
		cout << winners[i] << ' ';
	}
	getchar();
    return 0;
}

vector<int> lotto(int sum, int chose)
{
	vector<int> temp(sum);
	vector<int> A(chose);
	for (int i = 0;i < sum;i++)
	{
		temp[i] = i+1;
	}
	for (int i = 0;i < chose;i++)
	{
		random_shuffle(temp.begin()+i, temp.end());				//���뱣֤ÿ��ȡ�õ�Բ�����ǲ��ظ���
		A[i] = temp[i];										    //��֤Բ�����ǲ��ظ���
	}
	return A;
}
