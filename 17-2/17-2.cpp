// 17-2.cpp : 定义控制台应用程序的入口点。
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
		cout << "当前文件中的内容：\n";
		while (fin.get(ch) && ch != '\n')
		{
			cout << ch;
		}
		fin.close();
	}
	ofstream fout(argv[0],ios::out|ios::app);				//通过命令行输入文件名，并将其与文件输入流关联起来
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
	cout << "已经将输入复制到文件中.\n";
    return 0;
}

