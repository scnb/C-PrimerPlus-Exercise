// 4-7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct pizza
{
	string name;
	int dis;
	int weight;
};

int main()
{
	struct pizza one;
	cout << "enter the company's name: ";
	cin >> one.name;
	cout << "enter the distance of the pizza: ";
	cin >> one.dis;
	cout << "enter the weight of the pizza: ";
	cin >> one.weight;
	cout << one.name << endl;
	cout << one.dis << endl;
	cout << one.weight << endl;
	getchar();
	getchar();
    return 0;
}

