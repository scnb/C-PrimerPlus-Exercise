// 3-4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int Day = 24;
	const int Hour = 60;
	const int Minute = 60;
	cout << "�����룺_";
	cout << '\b';
	long time;
	cin >> time;
	int day = time / Minute / Hour / Day;
	int hour = time / Minute / Hour - day*Day;
	int minute = time / Minute - day*Day*Hour - hour*Hour;
	int second = time - day*Day*Hour*Minute - hour*Hour*Minute - minute*Minute;
	cout << time << " �� = " << day << " �� " << hour << " Сʱ " << minute << " ���� " << second << " �� " << endl;
	getchar();
	getchar();
    return 0;
}

