// 4-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	string brand;
	float weight;
	int carol;
};

int main()
{
	struct CandyBar things[3] =
	{
		{"one",1.0,100},
		{"two",2.0,200},
		{"three",3.0,300},
	};
	cout << things[0].brand << things[0].weight << things[0].carol << endl;
	cout << things[1].brand << things[1].weight << things[1].carol << endl;
	cout << things[2].brand << things[2].weight << things[2].carol << endl;
	getchar();
    return 0;
}

