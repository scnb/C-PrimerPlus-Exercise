// 3-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int feet;//Ӣ��
	int inch;//Ӣ��
	cout << "��XXӢ��XXӢ��ĸ�ʽ�������:_";
	cout << '\b';
	cin >> feet >> inch;
	const float in_to_m = 0.0254;
	float m = inch*in_to_m + feet * 12 * in_to_m;
	int bound;
	cout << "�԰��ķ�ʽ��������:_";
	cout << '\b';
	cin >> bound;
	const float b_to_kg = 2.2;              //�Ծ�ʯǿɭ��������Ϊ�������ݣ�
	float kg = bound/b_to_kg;				//			���  6Ӣ��5Ӣ��
	float bmi= kg / (m*m);					//			����  260��
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

