// 4-3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include <cstring>   //������char����

int main()
{
	using namespace std;
	char First_name[10];
	char Last_name[10];
	char single[20];
	cout << "What is your first name��";
	cin >> First_name;
	cout << "What is your last name?";
	cin >> Last_name;
	strcpy(single, Last_name);
	strcat(single, ", ");
	strcat(single, First_name);
	cout << "Here is the information in a single string: " << single << endl;
	getchar();
	getchar();
    return 0;
}

