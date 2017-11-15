// 6-8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	ifstream inFile;
	char filename[20];
	cout << "enter file's name:";
	cin >> filename;
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "open file failed.\n";
		exit(EXIT_FAILURE);
	}
	int num = 0;
	char ch;
	inFile >> ch;
	while (inFile.good())
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			++num;
		}
		if (inFile.eof())
		{
			break;
		}
		inFile >> ch;
	}
	cout << num << endl;
	system("pause");
    return 0;
}

