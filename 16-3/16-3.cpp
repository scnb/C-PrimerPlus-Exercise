// 16-3.cpp : �������̨Ӧ�ó������ڵ㡣
//���ļ��ж�ȡ���ʣ�ʹ��vector<string>���������string���飬ʹ��push_back()���ַ�����ӵ������У�
//��ʹ��size()��ȷ��������Ԫ�صĸ�����ÿ�δ��ļ��ж�ȡһ�����ʣ�������>>������getline()������Ӧ��
//�Կո��Ʊ�������з��ָ�����

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <fstream>
#include <iterator>
#include <algorithm>					//����for_each()����

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::tolower;
using std::fstream;
using std::vector;
using std::iterator;

void Showword(string st);

int main()
{
	fstream in("words.txt");					//�����ļ�ָ�룿
	vector<string> words;						
	string temp;	
	int i = 0;
	while (in>>temp)							//ֱ��ʹ�������˵�>>�������ȡ����
	{
		words.push_back(temp);					//����push_back()������vector�����������Ԫ��
	}
	for_each(words.begin(), words.end(), Showword);
	getchar();
	return 0;
}


void Showword(string st)
{
	cout << st << ' ';
}