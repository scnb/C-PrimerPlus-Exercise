// 4-10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;

int main()
{
	const int n_elems = 3;
	array<float, n_elems> arr;
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	cout << "һ�������γɼ���";
	cout << arr[0] << " , " << arr[1] << " , " << arr[2] << endl;
	cout << "ƽ���ɼ���: " << (arr[0] + arr[1] + arr[2]) / 3 << endl;
	getchar();
	getchar();
    return 0;
}

