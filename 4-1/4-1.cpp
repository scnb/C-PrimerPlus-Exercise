// 4-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
struct person
{
	char First_name[10];
	char Last_name[10];
	char grade;
	int age;
};

int main()
{
	using namespace std;
	struct person one;
	cout << "What is your first name?";
	cin >> one.First_name;
	cout << endl;
	cout << "What is your last name?";
	cin >> one.Last_name;
	cout << endl;
	cout << "What letter grade do you deserve?";
	cin >> one.grade;
	cout << endl;
	cout << "What is your age?";
	cin >> one.age;
	cout << "Name: " << one.Last_name << " ," << one.First_name << endl;
	cout << "Grade: " <<char( one.grade + 1)<< endl;
	cout << "Age: " << one.age;
	getchar();
	getchar();
	return 0;
}

