// 4-9.cpp : 定义控制台应用程序的入口点。
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
	struct CandyBar * ps = new struct CandyBar[3];
	cin >> ps[0].brand;
	cin >> ps[0].weight;
	cin >> ps[0].carol;
	cin >> ps[1].brand;
	cin >> ps[1].weight;
	cin >> ps[1].carol;
	cin >> ps[2].brand;
	cin >> ps[2].weight;
	cin >> ps[2].carol;
	cout << ps[0].brand;
	cout << ps[0].weight;
	cout << ps[0].carol;
	cout << ps[1].brand;
	cout << ps[1].weight;
	cout << ps[1].carol;
	cout << ps[2].brand;
	cout << ps[2].weight;
	cout << ps[2].carol;
	getchar();
	getchar();
    return 0;
}

