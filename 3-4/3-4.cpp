// 3-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int Day = 24;
	const int Hour = 60;
	const int Minute = 60;
	cout << "输入秒：_";
	cout << '\b';
	long time;
	cin >> time;
	int day = time / Minute / Hour / Day;
	int hour = time / Minute / Hour - day*Day;
	int minute = time / Minute - day*Day*Hour - hour*Hour;
	int second = time - day*Day*Hour*Minute - hour*Hour*Minute - minute*Minute;
	cout << time << " 秒 = " << day << " 天 " << hour << " 小时 " << minute << " 分钟 " << second << " 秒 " << endl;
	getchar();
	getchar();
    return 0;
}

