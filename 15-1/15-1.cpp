// 15-1.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "ң�������ڻ���ģʽ��\n";
	}
	else
	{
		cout << "ң�������ڳ���ģʽ��\n";
	}
	grey.set_chan(s42, 10);
	grey.volup(s42);
	s42.Set_Remote_State(grey);
	if (grey.show_state())
	{
		cout << "ң�������ڻ���ģʽ��\n";
	}
	else
	{
		cout << "ң�������ڳ���ģʽ��\n";
	}
	cout << "\n42\" settings after using remote:\n";
	s42.settings();
	getchar();
    return 0;
}

