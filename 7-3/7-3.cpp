// 7-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;



struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_value(box a);
void change_volume(box * pbox);

int main()
{
	struct box container =
	{
		"china",
		10,
		10,
		10,
		1,
	};
	show_value(container);
	change_volume(&container);
	show_value(container);
	getchar();
    return 0;
}

void show_value(box a)
{
	cout << "height = " << a.height << endl;
	cout << "width = " << a.width << endl;
	cout << "length = " << a.length << endl;
	cout << "volume = " << a.volume << endl;
}

void change_volume(box * pbox)
{
	pbox->volume = pbox->height*pbox->width*pbox->length;
}
