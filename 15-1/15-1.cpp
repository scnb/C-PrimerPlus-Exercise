// 15-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "tvfm.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Tv s42;
	cout << "Initial settings for 42\" TV:\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	s42.chanup();
	cout << "\nAdjusted settings for 42\" TV:\n";
	s42.settings();

	Remote grey;
	if (grey.show_state())
	{
		cout << "遥控器处于互动模式！\n";
	}
	else
	{
		cout << "遥控器处于常规模式！\n";
	}
	grey.set_chan(s42, 10);
	grey.volup(s42);
	s42.Set_Remote_State(grey);
	if (grey.show_state())
	{
		cout << "遥控器处于互动模式！\n";
	}
	else
	{
		cout << "遥控器处于常规模式！\n";
	}
	cout << "\n42\" settings after using remote:\n";
	s42.settings();
	getchar();
    return 0;
}

