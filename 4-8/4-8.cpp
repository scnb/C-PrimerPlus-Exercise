// 4-8.cpp : �������̨Ӧ�ó������ڵ㡣
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
	struct pizza * ps = new struct pizza;
	cin >> ps->name;
	cin >> ps->dis;
	cin >> ps->weight;
	cout << ps->name;
	cout << ps->dis;
	cout << ps->weight;
	getchar();
	getchar();
    return 0;
}

