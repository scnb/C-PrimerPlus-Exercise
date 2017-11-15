// 4-10.cpp : 定义控制台应用程序的入口点。
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
	cout << "一共有三次成绩：";
	cout << arr[0] << " , " << arr[1] << " , " << arr[2] << endl;
	cout << "平均成绩是: " << (arr[0] + arr[1] + arr[2]) / 3 << endl;
	getchar();
	getchar();
    return 0;
}

