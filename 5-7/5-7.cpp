// 5-7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Car
{
	string name;
	int year;
};

int main()
{
	int num;
	cout << "enter how many cars do you have?";
	cin >> num;
	struct Car *ps = new struct Car[num];
	cout << "Car #1" << endl;
	cout << "Please enter the maker's name:";
	cin >> ps[0].name;
	cout << "Please enter the maked year:";
	cin >> ps[0].year;
	cout << "Car #2" << endl;
	cout << "enter the maker's name:";
	cin >> ps[1].name;
	cout << "enter the maked year:";
	cin >> ps[1].year;
	cout << "here is your collection:" << endl;
	cout << (&ps[0])->name << endl;
	cout << (&ps[0])->year << endl;
	cout << ps[1].name << endl;
	cout << ps[1].year << endl;
	getchar();
	getchar();

    return 0;
}

