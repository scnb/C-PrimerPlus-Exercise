// 3-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	long long p_world;
	cout << "����ȫ������˿�����_";
	cout << '\b';
	cin >> p_world;
	long long p_usa;
	cout << "�����������˿�����_";
	cout << '\b';
	cin >> p_usa;
	cout << "�����˿�ռ�������˿ڵ� " << float(p_usa) / float(p_world)*100 << "% ." << endl;
	getchar();
	getchar();
    return 0;
}

