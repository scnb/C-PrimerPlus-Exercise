// 5-3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int sum = 0;
	int val;
	cout << "Enter the number:";
	cin >> val;
	while (0 != val)
	{
		sum = sum + val;
		cout << "Ŀǰ�ĺ��ǣ�" << sum << endl;
		cin >> val;
	}
	getchar();
    return 0;
}

