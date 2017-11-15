// 3-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int feet;//英尺
	int inch;//英寸
	cout << "以XX英尺XX英寸的格式输入身高:_";
	cout << '\b';
	cin >> feet >> inch;
	const float in_to_m = 0.0254;
	float m = inch*in_to_m + feet * 12 * in_to_m;
	int bound;
	cout << "以磅的方式输入体重:_";
	cout << '\b';
	cin >> bound;
	const float b_to_kg = 2.2;              //以巨石强森的数据作为测试数据：
	float kg = bound/b_to_kg;				//			身高  6英尺5英寸
	float bmi= kg / (m*m);					//			体重  260磅
	cout << feet << endl;
	cout << inch << endl;
	cout << m << endl;
	cout << kg << endl;
	cout << "BMI = " << bmi<< endl;
	//getchar();
	getchar();
	getchar();
    return 0;
}

