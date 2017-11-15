// 17-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::ios_base;
using std::ios;
using std::cerr;

int main(int argc,char * argv[])
{
	char ch;
	ifstream fin(argv[0]);
	if (fin.is_open())
	{
		cout << "��ǰ�ļ��е����ݣ�\n";
		while (fin.get(ch) && ch != '\n')
		{
			cout << ch;
		}
		fin.close();
	}
	ofstream fout(argv[0],ios::out|ios::app);				//ͨ�������������ļ��������������ļ���������������
	if (!fout.is_open())
	{
		cerr << "Can't open " << argv[0] << " file for output.\n";
		exit(EXIT_FAILURE);
	}

	string input;
	while (getline(cin,input) && input.size()>0)
	{
		fout << input << endl;
	}
	fout.close();
	cout << "�Ѿ������븴�Ƶ��ļ���.\n";
    return 0;
}

