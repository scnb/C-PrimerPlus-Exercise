// 3-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	long long p_world;
	cout << "输入全世界的人口数：_";
	cout << '\b';
	cin >> p_world;
	long long p_usa;
	cout << "输入美国的人口数：_";
	cout << '\b';
	cin >> p_usa;
	cout << "美国人口占世界总人口的 " << float(p_usa) / float(p_world)*100 << "% ." << endl;
	getchar();
	getchar();
    return 0;
}

