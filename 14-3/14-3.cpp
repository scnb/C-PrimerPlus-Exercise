// 14-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "worker.h"
#include <iostream>
#include <cstring>
using std::endl;
using std::cout;
using std::cin;
using std::strchr;


int main()
{
	cout << "Enter the maxium number of queue: ";
	int qs;
	cin >> qs;
	getchar();
	Queue line(qs);
	for (int i = 0;i < qs;i++)
	{
		Worker temp_worker;
		temp_worker.Get();
		line.enqueue(temp_worker);
	}
	cout << "Show all the workers in the queue: \n";
	for (int i = 0;i < qs;i++)
	{
		Worker temp_worker;
		if (line.isempty())
		{
			cout << "The queue is empty.\n";
			break;
		}
		line.dequeue(temp_worker);
	}
	getchar();
	return 0;
}

